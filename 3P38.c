#include <stdio.h>
#include <string.h>

int main() {
    char S[100], T[100];
    int len, i, j, match;

    printf("Enter string S: ");
    gets(S);

    printf("Enter string T: ");
    gets(T);

    int lenS = strlen(S);
    int lenT = strlen(T);

    if (lenS != lenT) {
        printf("T is not a rotation of S\n");
        return 0;
    }

    len = lenS;
    int isRotation = 0;

    // Try all rotations
    for (i = 0; i < len; i++) {
        match = 1;
        for (j = 0; j < len; j++) {
            if (S[(i + j) % len] != T[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            isRotation = 1;
            break;
        }
    }

    if (isRotation)
        printf("T is a rotation of S\n");
    else
        printf("T is not a rotation of S\n");

    return 0;
}