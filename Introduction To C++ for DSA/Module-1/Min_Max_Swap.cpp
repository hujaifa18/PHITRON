#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // min(a,b)   max(a,b)
    cout << min({a, b, c, d}) << endl;
    cout << max({a, b, c, d}) << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}