//Matrix multiplication
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], C[10][10];
    int i, j, k;

    // Read matrix dimensions
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check multiplication condition
    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    // Read Matrix A
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    // Read Matrix B
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("Resultant Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
