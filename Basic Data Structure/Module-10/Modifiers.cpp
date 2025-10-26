#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    list<int> l1;
    l1 = l; // assign
    for (int val : l1)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> l2 = {10, 20, 30};
    list<int> l3;
    l3.assign(l2.begin(), l2.end()); // assign

    l3.push_back(10);   // insert at tail
    l3.push_front(100); // insert at head
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;
    list<int> l4 = {10, 20, 30, 40};

    l4.pop_back();  // delete at tail
    l4.pop_front(); // delete at head
    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> l5 = {10, 20, 30, 40, 50};
    cout << *next(l5.begin(), 2) << endl; // iteretor
    l5.insert(next(l5.begin(), 1), 100);  // insert at any position
    // 1 element O(n)..multiple element O(n+k)
    // insert--O(1)..element access--O(n)
    for (int val : l5)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> l6 = {1, 2, 3, 4};
    list<int> l7 = {10, 20};
    l6.insert(next(l6.begin(), 2), l7.begin(), l7.end());
    for (int val : l6)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> l8 = {1, 2, 3, 4, 5};
    vector<int> v1 = {10, 20};
    l8.insert(next(l8.begin(), 2), v1.begin(), v1.end());
    for (int val : l8)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> l9 = {1, 2, 3, 4, 5};
    l9.erase(next(l9.begin(), 2)); // erase single
    for (int val : l9)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> l10 = {1, 2, 3, 4, 5, 6};
    l10.erase(next(l10.begin(), 2), next(l10.begin(), 5));
    // if we give 2 to 5 it will erase 2 to 4
    for (int val : l10)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> l11 = {1, 2, 3, 4, 5, 6, 7, 8};
    replace(l11.begin(), l11.end(), 2, 100);
    for (int val : l11)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> l12 = {1, 2, 3, 4, 100};
    auto it = find(l12.begin(), l12.end(), 100);
    if (it == l12.end())
    {
        cout << "Not Found\n";
    }
    else
    {
        cout << "Found\n";
    }
    return 0;
}