#include <stdio.h>

int main() {
    char str[100];
    char target, replace;
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to replace: ");
    scanf("%c", &target);

    getchar(); // clear buffer
    printf("Enter replacement character: ");
    scanf("%c", &replace);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == target)
            str[i] = replace;
    }

    printf("Modified string: %s\n", str);
    return 0;
}