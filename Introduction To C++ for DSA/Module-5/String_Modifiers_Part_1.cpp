#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";
    string s2 = "World";
    // s1 += s2;
    s1.append(s2);
    cout << s1 << endl;
    // s1.push_back('A');
    s1.pop_back();
    cout << s1 << endl;
    cout << s1 << endl;
    return 0;
}