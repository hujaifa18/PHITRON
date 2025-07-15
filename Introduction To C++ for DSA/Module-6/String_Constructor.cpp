#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s1 = "Hello";
    // string s1("Hello");
    string s1("Hello", 3); // Resize to size 3
    cout << s1 << endl;
    string s = "Hello World";
    string t(s, 4); // Delete first 4 char
    cout << t << endl;
    string s22(5, 'A');
    cout << s22 << endl;
    return 0;
}