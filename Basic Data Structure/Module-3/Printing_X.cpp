#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && i == n - 1 - j)
            {
                cout << "X";
            }
            else if (i == j)
            {
                cout << "\\";
            }
            else if (j == n - 1 - i)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
