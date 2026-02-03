#include <stdio.h>
#include <string.h>

int main() {
    char emails[50][100];
    char domains[50][100];
    int count[50] = {0};
    int n, i, j, k, domainCount = 0;

    printf("Enter number of email IDs: ");
    scanf("%d", &n);
    getchar(); // clear buffer

    // Read email IDs
    for (i = 0; i < n; i++) {
        gets(emails[i]);
    }

    // Extract domains and count
    for (i = 0; i < n; i++) {
        char domain[100];
        int idx = 0;

        // Extract domain (after @)
        for (j = 0; emails[i][j] != '\0'; j++) {
            if (emails[i][j] == '@') {
                j++;
                while (emails[i][j] != '\0') {
                    domain[idx++] = emails[i][j++];
                }
                break;
            }
        }
        domain[idx] = '\0';

        // Check if domain already exists
        for (k = 0; k < domainCount; k++) {
            if (strcmp(domains[k], domain) == 0) {
                count[k]++;
                break;
            }
        }

        // New domain
        if (k == domainCount) {
            strcpy(domains[domainCount], domain);
            count[domainCount] = 1;
            domainCount++;
        }
    }

    // Display result
    printf("\nDomain Frequency:\n");
    for (i = 0; i < domainCount; i++) {
        printf("%s : %d\n", domains[i], count[i]);
    }

    return 0;
}