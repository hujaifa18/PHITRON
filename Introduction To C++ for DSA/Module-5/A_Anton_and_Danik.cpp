#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c1 = 0;
    int c2 = 0;

    for (char result : s)
    {
        if (result == 'A')
        {
            c1++;
        }
        else if (result == 'D')
        {
            c2++;
        }
    }

    if (c1 > c2)
    {
        cout << "Anton\n";
    }
    else if (c2 > c1)
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }

    return 0;
}
