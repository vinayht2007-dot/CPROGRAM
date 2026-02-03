#include <stdio.h>

int main() {
    char str[100];
    int i;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Character\tASCII Value\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {   // ignore newline
            printf("%c\t\t%d\n", str[i], str[i]);
        }
    }

    return 0;
}