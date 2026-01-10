//Find the difference between two arrays (element-wise)
#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int diff[MAX_SIZE];
    int n = 0;
    int i = 0;

    /* Read number of elements */
    printf("Enter number of elements: ");
    scanf("%d", &n);

    /* Validate input */
    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }

    /* Read first array */
    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    /* Read second array */
    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    /* Calculate element-wise difference */
    for (i = 0; i < n; i++) {
        diff[i] = arr1[i] - arr2[i];
    }

    /* Display result */
    printf("Difference array (arr1 - arr2):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", diff[i]);
    }

    return 0;
}
