#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= 1; j--) {
            if(i >= j) {
                if(j % 2 == 0)
                    printf("* ");
                else
                    printf("%d ", i);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}