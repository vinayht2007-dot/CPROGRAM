#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end, flag = 1;

    printf("Enter a string: ");
    gets(str);

    start = 0;
    end = 0;

    // Find end index
    while (str[end] != '\0') {
        end++;
    }
    end--; // last character index

    // Check palindrome
    while (start < end) {
        if (str[start] != str[end]) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}