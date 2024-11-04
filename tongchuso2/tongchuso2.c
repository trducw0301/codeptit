#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int b;
        scanf("%d", &b);
        int sum = 0;
        while (b > 0)
        {
            sum += b % 10;
            b /= 10;
        }
        printf("%d\n", sum );

    }
    return 0;

}