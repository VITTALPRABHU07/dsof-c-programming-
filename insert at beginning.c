#include <stdio.h>
#include <stdlib.h>

// Self-referential structure
struct NODE {
    int data;
    struct NODE *next;
};

// Create new node
struct NODE* createNode(int value) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert at beginning
struct NODE* insertBeginning(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);
    newNode->next = head;
    return newNode;
}

// Display list
void display(struct NODE *head) {
    struct NODE *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct NODE *head = NULL;
    int n, value, i;

    printf("How many nodes? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &value);
        head = insertBeginning(head, value);
    }

    display(head);
    return 0;
}
