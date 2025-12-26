//Remove duplicate elements from an array
#include<stdio.h>
int main()
{

    int i,j,k, n;
    int arr[100];
    printf("enter the number of elements to be insert in array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
               for(k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];
                n--;   // reduce size
                j--;   // check same index again
            }
        }
    }
 printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
