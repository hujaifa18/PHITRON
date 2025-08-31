#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> presum(n);
    presum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        presum[i] = presum[i - 1] + a[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << presum[i] << " ";
    }
    cout << endl;
    return 0;
}