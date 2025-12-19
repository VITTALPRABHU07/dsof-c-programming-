//Copy elements from one array to another
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int arr[n],arrt[n];
    printf("enter the element of the array\n");//for input elements
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

         for(i=0;i<n;i++)  //for copying purpose
        {
            arrt[i]=arr[i];
        }
    printf(" the element of the array are\n"); //printing output
        for(i=0;i<n;i++)
        {
            printf("%d \n",arrt[i]);
        }

}
