#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], largest[50], smallest[50];
    int i = 0, j = 0, len, maxLen = 0, minLen = 1000;

    printf("Enter a sentence: ");
    gets(sentence);

    while (1) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            word[j] = '\0';  // terminate current word
            len = j;

            if (len > 0) { // avoid empty strings
                if (len > maxLen) {
                    maxLen = len;
                    strcpy(largest, word);
                }
                if (len < minLen) {
                    minLen = len;
                    strcpy(smallest, word);
                }
            }
            j = 0; // reset word index

            if (sentence[i] == '\0')
                break;
        } else {
            word[j++] = sentence[i];
        }
        i++;
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}