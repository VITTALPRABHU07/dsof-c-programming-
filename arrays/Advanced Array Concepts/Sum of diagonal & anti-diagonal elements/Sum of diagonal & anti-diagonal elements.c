#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    int diag = 0, adiag = 0;

    printf("Enter matrix size (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++) {
        diag += a[i][i];
        adiag += a[i][n - i - 1];
    }

    printf("Sum of Diagonal = %d\n", diag);
    printf("Sum of Anti-Diagonal = %d\n", adiag);

    return 0;
}
