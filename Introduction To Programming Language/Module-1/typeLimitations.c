#include <stdio.h>
int main()
{
    int a = 1000000000;
    printf("%d\n", a);
    // int can take 10^9
    // After that we have to use long long int
    // long long int can take 10^18
    long long int b = 100000000000;
    printf("%lld\n", b);
    float x = 10.123456;
    printf("%f\n", x);
    // float can take 6 numbers after decimal
    // After that we have to use double
    double y = 10.12345678;
    printf("%lf\n", y);
    return 0;
}