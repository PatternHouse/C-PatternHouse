
#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ", j + 64);
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}