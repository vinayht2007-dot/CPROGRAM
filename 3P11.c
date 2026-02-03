#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int start = 0, maxLen = 1;
    int len, i;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        int low, high;

        // Odd length palindrome
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high]) {
            if (high - low + 1 > maxLen) {
                start = low;
                maxLen = high - low + 1;
            }
            low--;
            high++;
        }

        // Even length palindrome
        low = i;
        high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high]) {
            if (high - low + 1 > maxLen) {
                start = low;
                maxLen = high - low + 1;
            }
            low--;
            high++;
        }
    }

    printf("Longest palindromic substring: ");
    for (i = start; i < start + maxLen; i++) {
        printf("%c", str[i]);
    }

    return 0;
}