#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n*2; j++) {
            if(j == i || j == 2*n - i)
                printf("%c", j + 64);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}