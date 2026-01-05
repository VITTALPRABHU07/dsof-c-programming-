/*
 * Program Name : Remove Duplicate Elements from an Array
 * Description  : Reads an array of integers, removes duplicate elements
 *                in-place, and prints the resulting array.
 * Language     : C
 */

#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int array[MAX_SIZE];
    int size;
    int i, j, k;

    /* Read number of elements */
    printf("Enter the number of elements: ");
    if (scanf("%d", &size) != 1 || size <= 0 || size > MAX_SIZE)
    {
        printf("Invalid number of elements.\n");
        return 1;
    }

    /* Read array elements */
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        if (scanf("%d", &array[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }

    /* Remove duplicate elements */
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                /* Shift elements to the left */
                for (k = j; k < size - 1; k++)
                {
                    array[k] = array[k + 1];
                }
                size--;   /* Reduce array size */
                j--;      /* Recheck current index */
            }
        }
    }

    /* Display result */
    printf("Array after removing duplicates:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

