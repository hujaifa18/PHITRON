#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    int min = a;
    if (b > max)
    {
        max = b;
    }
    if (b < min)
    {
        min = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (c < min)
    {
        min = c;
    }
    printf("%d %d\n", min, max);
    return 0;
}