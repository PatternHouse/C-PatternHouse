#include <stdio.h>

int main()
{
    int n = 5, mid = n/2 + 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == 1 || i == 1 || i == n || (i == mid && j >= mid) || (j == n && i > mid))
                printf("G ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}