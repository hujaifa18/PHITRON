#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {

        cin >> a[i];
    }
    int b[5];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }
    b[3] = 40;
    b[4] = 50;
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}
// In static array size is increased by taking new array
// But a[3] can't be deleted which can use huge memory