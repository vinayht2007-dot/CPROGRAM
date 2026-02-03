#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int seen[256] = {0};
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            str[j++] = str[i];         // keep character
            seen[(unsigned char)str[i]] = 1; // mark as seen
        }
    }

    str[j] = '\0'; // terminate string

    printf("String after removing duplicates: %s\n", str);
    return 0;
}