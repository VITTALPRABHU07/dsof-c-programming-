#include <stdio.h>

int main() {
    int a[50], b[50];
    int n1, n2;
    int i, j, found;

    // Read main array
    printf("Enter size of main array: ");
    scanf("%d", &n1);

    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    // Read sub-array
    printf("Enter size of sub-array: ");
    scanf("%d", &n2);

    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Search for sub-array
    found = 0;
    for(i = 0; i <= n1 - n2; i++) {
        for(j = 0; j < n2; j++) {
            if(a[i + j] != b[j])
                break;
        }

        if(j == n2) {   // all elements matched
            found = 1;
            printf("\nSub-array found at index %d\n", i);
            break;
        }
    }

    if(!found)
        printf("\nSub-array NOT found.\n");

    return 0;
}
