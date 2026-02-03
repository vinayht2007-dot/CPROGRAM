#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, n;

    printf("Enter a string: ");
    gets(str);

    n = strlen(str);

    printf("All substrings:\n");
    for (i = 0; i < n; i++) {          // starting index
        for (j = i; j < n; j++) {      // ending index
            for (k = i; k <= j; k++) { // print characters from i to j
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}