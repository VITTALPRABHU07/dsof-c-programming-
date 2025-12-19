           //Find the maximum and minimum element in an array
#include<stdio.h>
int main()
{
    int i,n,arr[i],max,min;
    printf("the no of elements are:\n");
    scanf("%d",&n);
      printf("enter the elements :\n");

      for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("The array elements are:\n");
    for(i = 0; i < n; i++)

        max=arr[0];
        min=arr[0];


    // Find max and min
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);


}
