//shift all zeros to the end
#include <stdio.h>

/* Function prototypes */
void shiftZerosToEnd(int arr[], int n);
void printArray(const int arr[], int n);

int main(void)
{
    int arr[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    shiftZerosToEnd(arr, n);

    printf("Array after shifting zeros to the end:\n");
    printArray(arr, n);

    return 0;
}

/* Function to move all zeros to the end */
void shiftZerosToEnd(int arr[], int n)
{
    int i, index = 0;

    /* Move non-zero elements to front */
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            arr[index++] = arr[i];
    }

    /* Fill remaining with zeros */
    while (index < n)
        arr[index++] = 0;
}

/* Function to print array */
void printArray(const int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
