#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Compare character by character
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) {
            printf("First string is greater\n");
            return 0;
        } else if (str1[i] < str2[i]) {
            printf("Second string is greater\n");
            return 0;
        }
        i++;
    }

    // If all characters matched, check lengths
    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("Both strings are equal\n");
    } else if (str1[i] == '\0') {
        printf("Second string is greater\n");
    } else {
        printf("First string is greater\n");
    }

    return 0;
}