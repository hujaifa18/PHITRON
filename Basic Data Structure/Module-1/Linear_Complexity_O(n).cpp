#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;                      // O(1)
    cin >> n;                   //)(1)
    for (int i = 1; i < n; i++) // O(n)
    {
        cout << i << " ";
    }
    return 0; // O(1)
}
// Total complexity O(n) **Always take worst case
//  ** Always ignore constant