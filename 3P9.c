#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j;

    printf("Enter a string: ");
    gets(str);

    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        if (str[i] == ' ') {
            i++;
        } else if (str[j] == ' ') {
            j--;
        } else {
            if (str[i] != str[j]) {
                printf("Not a palindrome\n");
                return 0;
            }
            i++;
            j--;
        }
    }

    printf("Palindrome\n");
    return 0;
}