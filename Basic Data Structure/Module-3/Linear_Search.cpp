#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, tar;
    cin >> n >> tar;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == tar)
            flag = 1;
    }
    if (flag == 1)
        cout << "found\n";
    else
        cout << 'not found\n';
    return 0;
}