#include <stdio.h>

void add(int *a, int *b, int *result)
{
    *result = *a + *b;
}

void subtract(int *a, int *b, int *result) 
{
    *result = *a - *b;
}

void multiply(int *a, int *b, int *result) 
{
    *result = *a * *b;
}

void divide(int *a, int *b, int *result)
{
    if (*b != 0)
        *result = *a / *b;
    else
        *result = 0;
}

int main() {
    int num1, num2, choice, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: add(&num1, &num2, &result); break;
        case 2: subtract(&num1, &num2, &result); break;
        case 3: multiply(&num1, &num2, &result); break;
        case 4: divide(&num1, &num2, &result); break;
        default:
            printf("Invalid choice.\n");
            return 0;
    }

    printf("Result = %d\n", result);

    return 0;
}
