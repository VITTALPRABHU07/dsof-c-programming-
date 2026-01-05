#include <stdio.h>
int isArraySorted(const int arr[], int n)
{
    if (n <= 1) {
        return 1;   // Single or empty array is sorted
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;   // Order violation
        }
    }

    return 1;
}

/*------------------------ MAIN ---------------------------*/
int main(void)
{
    int arr[] = {3, 5, 7, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isArraySorted(arr, n)) {
        printf("Array is sorted in ascending order.\n");
    } else {
        printf("Array is NOT sorted.\n");
    }

    return 0;
}
