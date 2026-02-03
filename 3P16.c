#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    int i, atPos = -1, dotPos = -1;

    printf("Enter email ID: ");
    gets(email);

    for (i = 0; email[i] != '\0'; i++) {
        if (email[i] == ' ')
        {
            printf("Invalid Email ID\n");
            return 0;
        }
        if (email[i] == '@')
            atPos = i;
        if (email[i] == '.')
            dotPos = i;
    }

    // Validation conditions
    if (atPos > 0 &&
        dotPos > atPos + 1 &&
        dotPos < strlen(email) - 1) {
        printf("Valid Email ID\n");
    } else {
        printf("Invalid Email ID\n");
    }

    return 0;
}