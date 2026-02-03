#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char password[100];
    int i;
    int upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter password: ");
    gets(password);

    // Length check
    if (strlen(password) < 8) {
        printf("Weak Password (Minimum 8 characters required)\n");
        return 0;
    }

    for (i = 0; password[i] != '\0'; i++) {
        if (password[i] == ' ') {
            printf("Invalid Password (No spaces allowed)\n");
            return 0;
        }
        else if (isupper(password[i]))
            upper = 1;
        else if (islower(password[i]))
            lower = 1;
        else if (isdigit(password[i]))
            digit = 1;
        else
            special = 1;
    }

    if (upper && lower && digit && special)
        printf("Strong Password\n");
    else
        printf("Weak Password\n");

    return 0;
}