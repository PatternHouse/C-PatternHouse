#include <stdio.h>

int main()
{
    int n = 6;
    
    for(int i = n; i > 0; i--) {
        int k = (i % 2 != 0) ? i + 1 : i;
        for(int s = k; s < n; s++)
            printf("  ");
            
        for(int j = 0; j < k; j++) 
            printf("* ");
            
        printf("\n");
    }
    
    return 0;
}