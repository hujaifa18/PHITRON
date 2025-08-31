#include <bits/stdc++.h>
using namespace std;
// p er age & dile main function eu change hoy
void fun(int *&p)
{
    int y = 100;
    p = &y;
    cout << "In fun : " << *p << endl;
}
int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "In main : " << *p << endl;
    return 0;
}