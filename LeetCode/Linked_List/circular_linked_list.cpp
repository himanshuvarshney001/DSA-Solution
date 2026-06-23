#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node Node;

// Insert at end
Node* insert(Node *head) {
    Node *ptr = (Node*)malloc(sizeof(Node));
    printf("Enter value: ");
    scanf("%d", &ptr->data);

    if (head == NULL) {
        ptr->next = ptr;  // circular
        return ptr;
    }

    Node *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->next = head;

    return head;
}

// Display circular list
void display(Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(head)\n");
}

int main() {
    Node *head = NULL;
    int choice;

    while (1) {
        printf("\n1. Insert\n2. Display\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                head = insert(head);
                break;
            case 2:
                display(head);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}