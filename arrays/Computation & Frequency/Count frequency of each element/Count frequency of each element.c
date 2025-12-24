//Count frequency of each element
#include<stdio.h>
int main()
{
    int i,j,n,count;
    int arr[100];
    int arrv[100]={0};
    printf("enter the no of the elements of array\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
     printf("\nElement   Frequency\n");

    for (i = 0; i < n; i++) {
        if (arrv[i] == 1)
            continue;

       count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arrv[j] = 1;
            }
        }
        printf("%d\t\t%d\n", arr[i], count);
    }

    return 0;


}
