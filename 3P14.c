#include <stdio.h>
#include <string.h>

int main() {
    char str[200], result[200];
    int freq[256] = {0};
    int i, max = 0, maxChar = 0, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    // Count frequency
    for (i = 0; i < len; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            maxChar = (unsigned char)str[i];
        }
    }

    // Check possibility
    if (max > (len + 1) / 2) {
        printf("Rearrangement not possible\n");
        return 0;
    }

    // Place most frequent character at even positions
    int index = 0;
    while (freq[maxChar] > 0) {
        result[index] = maxChar;
        index += 2;
        freq[maxChar]--;
    }

    // Place remaining characters
    for (i = 0; i < 256; i++) {
        while (freq[i] > 0) {
            if (index >= len)
                index = 1;
            result[index] = (char)i;
            index += 2;
            freq[i]--;
        }
    }

    result[len] = '\0';

    printf("Rearranged string: %s\n", result);
    return 0;
}