#include <stdio.h>

struct Student {
    int roll;
    float marks;
    char name[20];
};

int main() {

    struct Student s[3];   // Array of structure (3 students)

    // Input
    for(int i = 0; i < 3; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    // Output
    printf("\n------ Student Details ------\n");
    for(int i = 0; i < 3; i++) {
        printf("Student %d\n", i+1);
        printf("Roll : %d\n", s[i].roll);
        printf("Name : %s\n", s[i].name);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    // Size of structure and array
    printf("Size of one structure     : %lu bytes\n", sizeof(struct Student));
    printf("Size of whole array (3)   : %lu bytes\n", sizeof(s));

    return 0;
}

