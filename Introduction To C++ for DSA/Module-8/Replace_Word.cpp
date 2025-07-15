#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, x;

    while (n--)
    {
        cin >> s >> x;
        int length_x = x.length();
        int length_s = s.length();

        for (int i = 0; i <= length_s - length_x;)
        {
            bool match = true;
            for (int j = 0; j < length_x; j++)
            {
                if (s[i + j] != x[j])
                {
                    match = false;
                    break;
                }
            }

            if (match)
            {
                s.replace(i, length_x, "#");
                length_s = s.length();
                i += 1;
            }
            else
            {
                i++;
            }
        }

        cout << s << endl;
    }

    return 0;
}
