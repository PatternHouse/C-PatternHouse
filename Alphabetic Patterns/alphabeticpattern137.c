#include <stdio.h>

int main()
{
    int c = 1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", i + 64);
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
        c = c + 2;
    }

    return 0;
}