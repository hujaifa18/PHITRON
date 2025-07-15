#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    char s[100];
    cin.getline(s, 100);
    cout << x << endl
         << s << endl;
    string y;
    cin >> y;
    cout << y << endl;
    return 0;
}