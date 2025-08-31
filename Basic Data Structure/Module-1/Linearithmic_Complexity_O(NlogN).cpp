#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) // O(n)
    {
        for (int j = 1; j < n; j *= 2) // O(logN)
        // j Cannot started from 0, it occurs infinity loop
        {
            cout << "Hello\n";
        }
    }
    return 0;
}
// Complexity O(NlogN)