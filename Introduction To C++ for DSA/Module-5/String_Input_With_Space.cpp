#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    string s;
    // cin>>s; cannot take input with space
    cin.ignore();    // Ignore enter from input
    getline(cin, s); // Can take input with space
    cout << x << endl;
    cout << s << endl;
    return 0;
}