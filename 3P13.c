#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int shift, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter shift value: ");
    scanf("%d", &shift);

    shift = shift % 26;   // normalize shift

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A' + shift) % 26) + 'A';
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a' + shift) % 26) + 'a';
        }
        // else: digits, spaces, symbols remain unchanged
    }

    printf("Encrypted string: %s\n", str);

    return 0;
}