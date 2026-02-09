//Interchange diagonals of a matrix
#include <stdio.h>

int main() {
    int a[10][10], n, i, temp;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++) {
        temp = a[i][i];
        a[i][i] = a[i][n - i - 1];
        a[i][n - i - 1] = temp;
    }

    printf("Matrix after interchanging diagonals:\n");
    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
