#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, j = 0, validCount = 0;
    char word[50];

    printf("Enter a string: ");
    gets(str);

    while (1) {
        // Extract a word
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';  // terminate current word

            if (j > 0) { // ignore empty words
                int isValid = 1;
                for (int k = 0; word[k] != '\0'; k++) {
                    if (!isalpha(word[k])) { // check each character
                        isValid = 0;
                        break;
                    }
                }
                if (isValid)
                    validCount++;
            }
            j = 0; // reset word index

            if (str[i] == '\0') // end of string
                break;
        } else {
            word[j++] = str[i]; // add character to word
        }
        i++;
    }

    printf("Number of valid words: %d\n", validCount);
    return 0;
}