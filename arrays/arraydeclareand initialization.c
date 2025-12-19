/*#include <stdio.h>

int main() {
    int arr[5] = {5, 10, 15, 20, 25};

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}*/
#include <stdio.h>

int main()
{
    int n, i, arr[n];

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

