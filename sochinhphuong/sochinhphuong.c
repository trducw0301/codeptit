#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d", &a);
    while ( a--)
    {
        long long b;
        scanf("%lld", &b);
        int c = sqrt(b);
        if (c * c == b)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
    
}