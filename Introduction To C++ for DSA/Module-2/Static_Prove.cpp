#include <bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int x = 10;
    p = &x;
    cout << "Fun = " << *p << endl;
    return;
}
int main()
{
    fun();
    cout << "Main = " << *p << endl;
    return 0;
}
// After Returning from function x variable will deleted
// Main funtion cannot print 10
// We have run this in online compiler