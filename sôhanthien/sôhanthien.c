#include <stdio.h>
#include <math.h>
int main()
{
    long long n;
    int sc = 0;
    int sl = 0;
         while (n != 0)
        {
            if(sc % 2 == 0)
                ++sc;
            else
                ++sl;
            printf("%d %d", sc, sl);
        }
    return 0;
    
    
}