#include <stdio.h>
#include <math.h>
int main()
{
    long long n;
    int a = 0;

    scanf("%lld", &n);
    while (n != 0)
    {
     n /= 10;
     ++a;
    }
    printf("%d", a);
    return 0;
    



}