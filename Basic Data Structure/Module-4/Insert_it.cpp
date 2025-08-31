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
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int x;
    cin >> x;
    vector<int> arr(n + m);
    for (int i = 0; i < x; i++)
    {
        arr[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        arr[i + x] = b[i];
    }
    for (int i = x; i < n; i++)
    {
        arr[i + m] = a[i];
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}