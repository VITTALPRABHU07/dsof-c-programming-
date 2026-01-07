//Rotate an array by k positions

#include <stdio.h>

/* Function prototypes */
void rotateRight(int arr[], int n, int k);
void printArray(const int arr[], int n);

int main(void)
{
    int arr[100];
    int n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter rotation value k: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after rotating right by %d positions:\n", k);
    printArray(arr, n);

    return 0;
}

/* Rotate array to the right by k positions */
void rotateRight(int arr[], int n, int k)
{
    int i, j, temp;

    if (n <= 0)
        return;

    k = k % n;   /* Handle k > n */

    for (i = 0; i < k; i++)
    {
        temp = arr[n - 1];
        for (j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

/* Print array elements */
void printArray(const int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
