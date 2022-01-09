#include <stdio.h>

int main()
{
    int n = 9, x = (n-1)/2;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i + j >= 3*n/2 - 1 || i + j <= x || i - j >= x || j - i >= x)
                printf("* ");
            else 
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}