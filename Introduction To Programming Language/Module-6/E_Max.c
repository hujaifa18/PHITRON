#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
    }
    printf("%d\n", max);
    return 0;
}