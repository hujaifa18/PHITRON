#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,2,3,4,10,6};
    l.remove(10);
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int>l1 ={1,3,4,5,6,7};
    l1.sort();
    for (int val : l1)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int>l2 = {1,3,5,0,8,43,2};
    l2.sort(greater<int>());
    for (int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int>l3={1,2,3,4,1,2,4};
    l3.sort();
    l3.unique();//remove duplicate while sorted
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int>l4 = {1,2,3,4,5};
    l4.reverse();
    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}