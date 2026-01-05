//Find the second largest and second smallest element
#include <stdio.h>
#include <limits.h>


int findSecondMinMax(const int arr[], int size,
                     int *secondSmallest, int *secondLargest)
{
    int smallest = INT_MAX;
    int largest  = INT_MIN;
    int secSmall = INT_MAX;
    int secLarge = INT_MIN;

    if (size < 2) {
        return -1;   // Not enough elements
    }

    for (int i = 0; i < size; i++) {

        /* Second Smallest Logic */
        if (arr[i] < smallest) {
            secSmall = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < secSmall) {
            secSmall = arr[i];
        }

        /* Second Largest Logic */
        if (arr[i] > largest) {
            secLarge = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secLarge) {
            secLarge = arr[i];
        }
    }

    if (secSmall == INT_MAX || secLarge == INT_MIN) {
        return -1;   // Second min/max does not exist
    }

    *secondSmallest = secSmall;
    *secondLargest  = secLarge;

    return 0;
}

/*-------------------- MAIN FUNCTION ----------------------*/
int main(void)
{
    int arr[] = {12, 5, 7, 3, 19, 5, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondSmallest = 0;
    int secondLargest  = 0;

    if (findSecondMinMax(arr, size,
                         &secondSmallest, &secondLargest) == 0) {

        printf("Second Smallest : %d\n", secondSmallest);
        printf("Second Largest  : %d\n", secondLargest);
    }
    else {
        printf("Second smallest or second largest not found.\n");
    }

    return 0;
}
