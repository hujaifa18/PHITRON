#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;
    cout << v[0] << endl;
    return 0;
}
// v.clear() makes the size 0.
// It does not delete any element