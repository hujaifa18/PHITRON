// This code is solved properly but we get time limit exceeded
// Therefor we need to know time complexity to make our code optimised
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int flag = 0;
        for (int i = 0; i < q; i++)
        {
            if (a[i] == x)
            {
                flag = 1;
            }
        }
        if (flag == 1)
            cout << "found\n";
        else
            cout << "not found\n";
    }
    return 0;
}