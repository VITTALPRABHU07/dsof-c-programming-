//Check if two arrays are equal
#include <stdio.h>

/* Function prototypes */
int areArraysEqual(const int arr1[], const int arr2[], int n);

int main(void)
{
    int arr1[100], arr2[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    if (areArraysEqual(arr1, arr2, n))
        printf("Both arrays are equal\n");
    else
        printf("Both arrays are not equal\n");

    return 0;
}

/* Function to compare two arrays */
int areArraysEqual(const int arr1[], const int arr2[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
            return 0;
    }
    return 1;
}
