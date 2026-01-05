//Calculates sum of even-index and odd-index elements
#include <stdio.h>
void findIndexSums(const int arr[], int n, int *evenSum, int *oddSum)
{
    *evenSum = 0;
    *oddSum  = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            *evenSum += arr[i];
        } else {
            *oddSum += arr[i];
        }
    }
}
int main(void)
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    int evenSum = 0;
    int oddSum  = 0;

    findIndexSums(arr, n, &evenSum, &oddSum);

    printf("Sum of Even Index Elements : %d\n", evenSum);
    printf("Sum of Odd Index Elements  : %d\n", oddSum);

    return 0;
}
