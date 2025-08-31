#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int tar;
    sort(a, a + n);
    while (t--)
    {
        cin >> tar;
        int flag = 0;
        int st = 0, end = n - 1;
        while (st <= end)
        {
            int mid = (end + st) / 2;
            if (a[mid] == tar)
            {
                flag = 1;
                break;
            }
            else if (a[mid] > tar)
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        if (flag == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}