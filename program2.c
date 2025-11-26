#include <stdio.h>

int add(int a, int b)
    { 
       return a + b;
     }
int subtract(int a, int b)
	{
    	return a - b;
     }
int multiply(int a, int b) 
     {
         return a * b; 
      }
int divide(int a, int b) 
      { 
          return b != 0 ? a / b : 0;
       }

int main() {
    int num1, num2, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Result = %d\n", add(num1, num2)); break;
        case 2: printf("Result = %d\n", subtract(num1, num2)); break;
        case 3: printf("Result = %d\n", multiply(num1, num2)); break;
        case 4:
            if (num2 != 0)
                printf("Result = %d\n", divide(num1, num2));
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
