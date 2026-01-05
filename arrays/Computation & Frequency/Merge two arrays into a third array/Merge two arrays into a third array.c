//Merge two arrays into a third array
#include <stdio.h>

void mergeArrays(const int arr1[], int n1,
                 const int arr2[], int n2,
                 int arr3[])
{
    int i = 0, j = 0;

    /* Copy elements of first array */
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    /* Copy elements of second array */
    for (j = 0; j < n2; j++) {
        arr3[i + j] = arr2[j];
    }
}

int main(void)
{
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, arr3);

    printf("Merged Array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
