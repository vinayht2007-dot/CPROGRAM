#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    gets(str);

    // Count frequency
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Display frequency
    printf("Character frequency:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", i, freq[i]);
        }
    }

    return 0;
}