//Rotate array left by 1 / right by 1
#include <stdio.h>

void leftRotateByOne(int arr[], int n) {
    int temp = arr[0];

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;
}

void rightRotateByOne(int arr[], int n) {
    int temp = arr[n - 1];

    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    leftRotateByOne(arr, n);
    printf("Array after left rotation by 1:\n");
    printArray(arr, n);

    rightRotateByOne(arr, n);
    printf("Array after right rotation by 1:\n");
    printArray(arr, n);

    return 0;
}
