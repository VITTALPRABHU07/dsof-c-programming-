#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, key, found = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] == key) {
                printf("Element found at (%d, %d)\n", i, j);
                found = 1;
            }
        }
    }

    if(!found)
        printf("Element not found\n");

    return 0;
}
