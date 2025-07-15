#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 97 && x <= 123)
    {
        x -= 32;
        printf("%c\n", x);
    }
    else
    {
        x += 32;
        printf("%c\n", x);
    }
    return 0;
}