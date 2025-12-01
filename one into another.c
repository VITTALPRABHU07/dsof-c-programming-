#include <stdio.h>
#include <string.h>

int main() {
    char name[50], copy[50];

    // Read a name
    printf("Enter a name: ");
    scanf("%s", name);  // reads single word name

    // Display the entered name
    printf("Original Name: %s\n", name);

    // Copy into another array
    strcpy(copy, name);

    // Display the copied name
    printf("Copied Name  : %s\n", copy);

    return 0;
}
