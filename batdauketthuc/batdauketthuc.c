#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int a, last;
        scanf("%d", &a);
        last = a % 10;
        while (a > 10)
            a /= 10;
        if (a == last)
            printf("YES\n");
        else 
            printf("NO\n");
    }
    return 0;
}