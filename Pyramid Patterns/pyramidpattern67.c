#include <stdio.h>

void printPattern (int);
void printWhitespaces (int);

int main () {

    int totalLines;

    printf("How many lines to be printed? -- ");
    fflush(stdout);
    scanf("%d", &totalLines);

    printf("\nYour pattern looks like this:\n");
    printf("\n");

    printPattern (totalLines);

    printf("\n");
    return 0;
}

void printPattern (int totalLines) {

    int whiteSpace, printStar;
    char alphabet = 'A';

    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);

        printStar = ((2 * i) - 1);

        for (int j = 1; j <= printStar; j++) {

            if (j & 1) {

                (i & 1) ? printf (" %c ", alphabet) : printf ("%2d ", i);
            } else {

                printf ("   ");
            }
        }

        alphabet++;
        printf("\n");
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        printf("   ");
    }
}