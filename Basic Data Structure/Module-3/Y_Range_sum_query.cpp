// Brute Force...TLE for O(q*n)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     vector<int> a(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     int L, R;
//     while (q--)
//     {
//         cin >> L >> R;
//         int sum = 0;
//         for (int i = L; i <= R; i++)
//         {
//             sum += a[i];
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }


//Prefix Sum....O(n)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<long long> presum(n + 1);
    presum[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        presum[i] = presum[i - 1] + a[i];
    }
    int L, R;
    while (q--)
    {
        cin >> L >> R;
        long long sum;
        if (L == 1)
        {
            sum = presum[R];
        }
        else
        {
            sum = presum[R] - presum[L - 1];
        }
        cout << sum << endl;
    }
    return 0;
}