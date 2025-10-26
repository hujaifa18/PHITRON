#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l; // O(1)
    list<int> l1 = {1, 2, 3, 4, 5};
    list<int> l2(10);    // O(n)
    list<int> l3(10, 3); // O(n)
    list<int> l4(l1);    // O(n)
    int a[] = {1, 2, 3, 4, 5, 6};
    list<int> l5(a, a + 6);
    vector<int> v = {10, 20, 30};
    list<int> l6(v.begin(), v.end());
    cout << *l3.begin() << endl;
    for (auto it = l3.begin(); it != l3.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}