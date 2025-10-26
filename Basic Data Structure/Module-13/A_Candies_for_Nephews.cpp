#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        while (n % 3 != 0)
        {
            n++;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}