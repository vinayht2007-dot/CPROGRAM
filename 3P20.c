#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int i, digitCount = 0;

    printf("Enter phone number: ");
    gets(str);

    // Count total digits
    for (i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i]))
            digitCount++;
    }

    int visible = 4;  // last 4 digits visible
    int maskUntil = digitCount - visible;
    int currentDigit = 0;

    // Mask digits
    for (i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            currentDigit++;
            if (currentDigit <= maskUntil)
                str[i] = '*';
        }
    }

    printf("Masked string: %s\n", str);
    return 0;
}