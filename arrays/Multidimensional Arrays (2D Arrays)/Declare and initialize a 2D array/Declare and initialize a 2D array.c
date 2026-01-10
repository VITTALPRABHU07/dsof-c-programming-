//Declare and initialize a 2D array
#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main(void) {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows = 0;
    int cols = 0;
    int i = 0;
    int j = 0;

    /* Read number of rows and columns */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    /* Validate input */
    if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    /* Read matrix elements */
    printf("Enter %d elements:\n", rows * cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    /* Display matrix */
    printf("\nMatrix Elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

