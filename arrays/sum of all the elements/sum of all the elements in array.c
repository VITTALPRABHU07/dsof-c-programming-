//sum of all the elements in array
#include<stdio.h>
int main()
{
    int i ,n ,sum=0,arr[n];
    printf("enter the no of elements in the array\n ");
    scanf("%d",&n);
    printf("enter the elements of the array\n ");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
   printf("the sum of the elements\n ");
    for(i=0;i<n;i++)
    {
      sum=sum+arr[i];
    }
    printf("%d",sum);

}
