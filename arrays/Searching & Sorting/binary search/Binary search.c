//Binary search
#include<stdio.h>
int main()
{
    int i,n,key,low,mid,high;
    printf("enter the no of elements\n");           //this is for no of elements
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements\n");                 //this is for elements inserting
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("enter the  elements to search\n");      //choice of elements
    scanf("%d",&key);
    low=0;                                          // for 1st element
    high=n-1;                                       //for last element
    while(low<= high)
    {
         mid = (low + high) / 2;                   //for mid element

        if(arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }

    }

    printf("Element not found\n");
    return 0;

}
