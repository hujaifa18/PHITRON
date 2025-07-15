#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";
    cout << s1.size() << endl;
    cout << s1.max_size() << endl; // 10^6
    cout << s1.capacity() << endl; // Dynamically increase
    s1.clear();
    cout << s1 << endl;
    cout << s1.size() << endl;
    if (s1.empty() == true)
    {
        cout << "Empty\n";
    }
    else
    {
        cout << "Not Empty\n";
    }
    string s2 = "Hello World";
    s2.resize(5);
    cout << s2 << endl;
    s2.resize(13, 'x');
    cout << s2 << endl;
    return 0;
}