#include <stdio.h>
#include <math.h>
int main() 
{
    int a, b;
    scanf("%d" "%d", &a, &b);
    if (b == 0)
    {
        printf("0");
        return 0;

    }
    printf("%d\n %d\n" "%d\n" "%.2f\n"   "%d\n", a + b, a - b, a * b,(float) a / b, a % b );
    return 0;

}