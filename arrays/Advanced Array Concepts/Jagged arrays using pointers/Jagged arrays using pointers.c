#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr[3];
    int i, j;

    arr[0] = (int *)malloc(2 * sizeof(int));
    arr[1] = (int *)malloc(3 * sizeof(int));
    arr[2] = (int *)malloc(4 * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < i + 2; j++)
            scanf("%d", &arr[i][j]);

    printf("Jagged Array:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < i + 2; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
