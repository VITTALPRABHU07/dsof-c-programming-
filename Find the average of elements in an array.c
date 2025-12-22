//Find the average of elements in an array
#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("enter the no of elements \n");
    scanf("%d",&n);
    int arr[n],avg=0;
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
        printf(" the avg of elements in array\n");
    for(i=0;i<n;i++)
    {
        avg=(sum /n);
    }
     printf("%d\n",avg);
}
