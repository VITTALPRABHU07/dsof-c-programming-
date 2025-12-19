//Count positive, negative, even, odd numbers in an array

#include<stdio.h>
int main()
{
   int pos=0,neg=0,even=0,odd=0,i,n,arr[i];
   printf("enter the no of  elmts\n ");
   scanf("%d\n",&n);

   printf("the elemts are \n");

         for(int i= 0; i < n; i++)

   scanf("%d",&arr[i]);

    for(int i = 0; i < n; i++)
    {
    if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
     printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);

    return 0;
}
