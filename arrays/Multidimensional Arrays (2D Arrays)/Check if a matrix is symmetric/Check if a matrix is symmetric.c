//Check if a matrix is symmetric
#include <stdio.h>

int main() {
    int n, i, j;
    int A[10][10];
    int flag = 1;

    // Read matrix size
    printf("Enter order of the matrix (n x n): ");
    scanf("%d", &n);

    // Read matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    // Display result
    if (flag == 1)
        printf("The matrix is symmetric\n");
    else
        printf("The matrix is not symmetric\n");

    return 0;
}

