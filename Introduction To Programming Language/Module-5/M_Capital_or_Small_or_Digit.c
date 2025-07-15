#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 65 && x <= 123)
    {
        printf("ALPHA\n");
        if (x >= 97 && x <= 123)
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL\n");
        }
    }
    else
    {
        printf("IS DIGIT\n");
    }
    return 0;
}