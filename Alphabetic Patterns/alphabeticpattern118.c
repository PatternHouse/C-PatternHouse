
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                printf("%c", j + 64);
            }
            printf("\n");
        }
    }

    return 0;
}
