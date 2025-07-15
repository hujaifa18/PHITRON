#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (a[i] == a[j])
        {
            count++;
        }
    }
    if (count == n / 2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}