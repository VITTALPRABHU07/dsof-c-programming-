//Find the largest element in a matrix
#include <stdio.h>

int main() {
    int r, c;
    int A[10][10];
    int i, j, max;

    // Read matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Read matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Assume first element as maximum
    max = A[0][0];

    // Find largest element
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
        }
    }

    // Display result
    printf("Largest element in the matrix = %d\n", max);

    return 0;
}

