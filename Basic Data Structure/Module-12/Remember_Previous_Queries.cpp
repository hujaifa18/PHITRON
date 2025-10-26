#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < (int)l.size())
            {
                auto it = l.begin();
                advance(it, v);
                l.erase(it);
            }
        }

        cout << "L -> ";
        for (int val : l)
        {
            cout << val << " ";
        }
        cout << endl;

        cout << "R -> ";
        for (auto it = l.rbegin(); it != l.rend(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
