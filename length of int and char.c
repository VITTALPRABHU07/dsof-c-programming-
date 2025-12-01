#include <stdio.h>
#include <string.h>

int main() {

    // Integer array
    int num[] = {10, 20, 30, 40, 50, 60};
    int int_length;

    int_length = sizeof(num) / sizeof(num[0]);

    // Character array (string)
    char str[] = "HELLO WORLD";
    int char_length;
    int total_size;

    char_length = strlen(str);      // number of characters (excluding '\0')
    total_size  = sizeof(str);      // total size including '\0'

    // Display results
    printf("----- Integer Array -----\n");
    printf("Elements: ");
    for(int i = 0; i < int_length; i++) {
        printf("%d ", num[i]);
    }
    printf("\nLength of integer array = %d\n\n", int_length);

    printf("----- Character Array -----\n");
    printf("String: %s\n", str);
    printf("Length of string (characters) = %d\n", char_length);
    printf("Total size of char array (including \\0) = %d bytes\n", total_size);

    return 0;
}

