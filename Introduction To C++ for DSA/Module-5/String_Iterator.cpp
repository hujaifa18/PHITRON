#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }
    cout << *s.begin() << endl;
    cout << *s.end() << endl;
    cout << *(s.end() - 1) << endl;

    string s1 = "Hello World";

    for (string::iterator it = s1.begin(); it < s1.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}