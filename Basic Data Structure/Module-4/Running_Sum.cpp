#include <bits/stdc++.h>
using namespace std;
vector<int> runningSum(int n, vector<int> v)
{
    vector<int> sum(n);
    sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + v[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> result = runningSum(n, v);
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}