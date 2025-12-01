#include <stdio.h>

int main() {
    int a[50], rev[50];
    int n, i;

    // Read size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Reverse and store in another array
    for(i = 0; i < n; i++) {
        rev[i] = a[n - 1 - i];
    }

    // Display original array
    printf("\nOriginal Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    // Display reversed array
    printf("\nReversed Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }

    return 0;
}


