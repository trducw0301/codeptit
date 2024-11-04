#include <stdio.h>
#include <math.h>
int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    printf("%lld\n", (long long)(b - a + 1) * (a + b) / 2);
    return 0;
}