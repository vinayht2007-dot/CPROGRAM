#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    // Length check
    if (strlen(s1) != strlen(s2)) {
        printf("Not a rotation\n");
        return 0;
    }

    // Concatenate s1 with itself
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is substring of temp
    if (strstr(temp, s2) != NULL)
        printf("Rotation\n");
    else
        printf("Not a rotation\n");

    return 0;
}