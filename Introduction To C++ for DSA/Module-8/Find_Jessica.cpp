#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}