#include <stdio.h>
#include<math.h>
int main ()
{
    int a, last, first, temp;
    scanf("%d", &a);
    last = a % 10;
    temp = a;
    do 
    {
        first = temp % 10;
    }
    while (temp /= 10);
    printf ("%d %d", first, last);
    return 0;
}