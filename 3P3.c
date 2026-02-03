#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[50];
    int i, valid = 1;

    // List of C keywords
    char *keywords[] = {
        "auto","break","case","char","const","continue","default",
        "do","double","else","enum","extern","float","for","goto",
        "if","int","long","register","return","short","signed",
        "sizeof","static","struct","switch","typedef","union",
        "unsigned","void","volatile","while"
    };

    printf("Enter a string: ");
    scanf("%s", str);


    if (!(isalpha(str[0]) || str[0] == '_')) {
        valid = 0;
    }


    for (i = 1; str[i] != '\0' && valid; i++) {
        if (!(isalnum(str[i]) || str[i] == '_')) {
            valid = 0;
        }
    }


    for (i = 0; i < 32 && valid; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            valid = 0;
        }
    }


    if (valid)
        printf("'%s' is a valid identifier.\n", str);
    else
        printf("'%s' is NOT a valid identifier.\n", str);

    return 0;
}