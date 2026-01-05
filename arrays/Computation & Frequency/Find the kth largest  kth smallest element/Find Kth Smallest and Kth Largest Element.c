//Find Kth Smallest and Kth Largest Element
#include <stdio.h>

/* Simple sorting using Bubble Sort (clear & readable) */
void sortArray(int arr[], int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(void)
{
    int arr[] = {12, 5, 7, 3, 19, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    if (k <= 0 || k > n) {
        printf("Invalid value of k\n");
        return 0;
    }

    sortArray(arr, n);

    printf("Kth Smallest Element : %d\n", arr[k - 1]);
    printf("Kth Largest Element  : %d\n", arr[n - k]);

    return 0;
}
