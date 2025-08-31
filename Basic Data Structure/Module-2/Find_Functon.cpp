#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    // vector<int>::iterator it=find(v.begin(),v.end(),4);
    auto it = find(v.begin(), v.end(), 4);
    if (it == v.end())
    {
        cout << "Not Found\n";
    }
    else
    {
        cout << "Found\n";
    }
    return 0;
}