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

    if (n == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    vector<int> presum(n);
    presum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        presum[i] = presum[i - 1] + a[i];
    }

    int index = -1;
    for (int i = 1; i < n; i++)
    {
        int left = presum[i - 1];
        int right = presum[n - 1] - presum[i];
        if (left == right)
        {
            index = i;
            break;
        }
    }

    cout << index << endl;
    return 0;
}
