#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";
    string s2 = "Hi";
    s1 = s2;
    cout << s1 << endl;
    string s3 = "Abid";
    string s4 = "Hasan";
    s3.assign(s4);
    cout << s3 << endl;
    string s5 = "Hello World";
    s5.erase(4, 6);
    cout << s5 << endl;
    string s6 = "Hello Hujaifa";
    s6.replace(6, 7, "BD");
    cout << s6 << endl;
    string s7 = "Hello BD";
    s7.insert(5, " Hujaifa");
    cout << s7 << endl;
    return 0;
}