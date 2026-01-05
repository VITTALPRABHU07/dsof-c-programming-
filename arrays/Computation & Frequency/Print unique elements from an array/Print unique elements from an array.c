//Print unique elements from an array
#include <stdio.h>

#define MAX_SIZE 1000

/* Function to print unique elements from the array */
void printUniqueElements(const int arr[], int size) {
    int i, j;
    int frequency;

    printf("Unique elements: ");

    for (i = 0; i < size; i++) {
        frequency = 0;

        for (j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                frequency++;
            }
        }

        if (frequency == 1) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}

int main(void) {
    int array[MAX_SIZE];
    int size;
    int i;

    /* Input validation */
    printf("Enter number of elements: ");
    if (scanf("%d", &size) != 1 || size <= 0 || size > MAX_SIZE) {
        printf("Error: Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    /* Process and display result */
    printUniqueElements(array, size);

    return 0;
}
