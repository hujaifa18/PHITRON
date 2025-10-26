#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val;
    list<int> l;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        l.push_back(val);
    }
    l.sort();
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}