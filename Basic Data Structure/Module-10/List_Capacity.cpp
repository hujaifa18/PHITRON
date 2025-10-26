#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    cout << l.size() << endl;
    cout << l.max_size() << endl;
    l.clear();
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << l.size() << endl;
    if (l.empty())
    {
        cout << "0" << endl;
    }
    list<int> l2 = {1, 2, 3, 5};
    l2.resize(2);
    for (int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;
    list<int> l1 = {1, 2};
    l1.resize(5, 100);
    for (int val : l1)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}