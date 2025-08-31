#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // using loop the code will run n times
    //  int sum=0;
    //   for(int i=1;i<=n;i++)
    //   {
    //       sum+=i;
    //   }
    // using formula the code will run 1 time
    int sum = (n * (n + 1)) / 2;
    cout << sum << endl;
    return 0;
}