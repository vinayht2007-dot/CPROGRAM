#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50];
    char smallest[50], largest[50];
    int i = 0, j = 0, len;
    int min = 1000, max = 0;

    printf("Enter a string: ");
    gets(str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';
            len = strlen(word);

            if (len > 0) {
                if (len < min) {
                    min = len;
                    strcpy(smallest, word);
                }
                if (len > max) {
                    max = len;
                    strcpy(largest, word);
                }
            }
            j = 0;

            if (str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}