#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s = {1, 92.5};   // structure variable
    struct Student *ptr;            // pointer to structure

    ptr = &s;   // assign address

    // Access members using ->
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
