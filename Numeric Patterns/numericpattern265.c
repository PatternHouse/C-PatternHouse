#include <stdio.h>

int main()
{
    int n = 9, x = n/2 + 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == x || j == n - x + 1)
                printf("%d ", x);
            else
                printf("  ");
        }
        if(i <= n/2) 
            x--;
        else 
            x++;
            
        printf("\n");
    }
    return 0;
}