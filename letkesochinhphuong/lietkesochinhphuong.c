#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = ceil(sqrt(a));  //sochinnhphuong
    int d = floor(sqrt(b)); //sochinhphuong
    printf("%d\n", d - c + 1); //tongso
    for(int i = c; i <= d; i++)
        {
            printf("%d\n", i * i);
        } 
    
    return 0;
}