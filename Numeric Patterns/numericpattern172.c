#include <stdio.h>

int main()
{
   int n = 5, x = 1, y, t = 1;
    for(int i = 1; i < n; i++) {
        y = t;
        for(int j = 1; j <= i; j++) {
            if(i % 2 == 1)
                printf("%d",x);
            else
              printf("%d",y);
            if(j != i)
                printf("*");
            x++;
            y--;
        }
        t += i + 1;
        printf("\n");}
    return 0;
}