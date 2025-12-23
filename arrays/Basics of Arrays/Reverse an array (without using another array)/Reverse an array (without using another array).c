//Reverse an array (without using another array)
#include<stdio.h>
int main()
{
  int i,n;

  printf("enter the no of elements of array\n");
  scanf("%d",&n);
  int arr[n];
  printf("enter the elements of array\n");
      for (i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
  printf("the elements are\n");

      for (i=0;i<n;i++)
   {
   printf("%d \n",arr[i]);
   }
printf("the reverse elements are\n");

      for (i=n-1;i>=0;i--)
   {
   printf("%d \n",arr[i]);

   }
}
