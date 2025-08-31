#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> v;
    for (int i = n - 1; i >= 0; i--)
    {
        v.push_back(a[i]);
    }
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}