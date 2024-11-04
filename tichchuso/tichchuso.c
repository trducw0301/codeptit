#include <stdio.h>
#include <math.h>
int main()
{
    int num, tich = 1, last;
    scanf("%d", &num);
    while (num > 0)
    {
        last = num % 10;
        tich *= last;
        num /= 10; 
    }
    printf("%d", tich);
    return 0;
}

