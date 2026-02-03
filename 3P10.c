#include <stdio.h>
#include <string.h>

int main() {
    char str[200], temp[200];
    int n, len, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter number of positions: ");
    scanf("%d", &n);

    len = strlen(str);
    n = n % len;   // handles n > length

    // Copy first n characters
    for (i = 0; i < n; i++) {
        temp[i] = str[i];
    }
    temp[i] = '\0';

    // Shift remaining characters to the left
    for (i = 0; i < len - n; i++) {
        str[i] = str[i + n];
    }

    // Append stored characters at the end
    strcat(str, temp);

    printf("Left rotated string: %s\n", str);

    return 0;
}