#include <stdio.h>
int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a - b < 0 && a - c < 0)
    {
        printf("%lld", a);
    }
    else if(b - a < 0 && b - c < 0)
    {
        printf("%lld", b);
    }
    else
    {
        printf("%lld", c);
    }
    return 0;
    

}