#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // Run n times
    //  for(int i=1;i<=n;i++)
    //  {
    //      if(n%i==0)
    //      {
    //          cout<<i<<endl;
    //      }
    //  }
    // Run sqrt(n) times. so this is optimised
    for (int i = 1; i <= sqrt(n); i++)
    // for(int i=1;i*i<=n;i++)
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
        }
    }
    return 0;
}
// Complexity O(sqrt(n))