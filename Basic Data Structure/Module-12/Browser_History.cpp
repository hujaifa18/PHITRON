#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> addresses;
    string s;

    while (cin >> s && s != "end")
    {
        addresses.push_back(s);
    }

    int Q;
    cin >> Q;
    auto current = addresses.begin();

    for (int i = 0; i < Q; i++)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string addr;
            cin >> addr;
            bool found = false;
            for (auto it = addresses.begin(); it != addresses.end(); ++it)
            {
                if (*it == addr)
                {
                    current = it;
                    cout << *current << "\n";
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Not Available\n";
            }
        }
        else if (cmd == "next")
        {
            auto nextIt = current;
            nextIt++;
            if (nextIt != addresses.end())
            {
                current = nextIt;
                cout << *current << "\n";
            }
            else
            {
                cout << "Not Available\n";
            }
        }
        else if (cmd == "prev")
        {
            if (current != addresses.begin())
            {
                current--;
                cout << *current << "\n";
            }
            else
            {
                cout << "Not Available\n";
            }
        }
    }

    return 0;
}
