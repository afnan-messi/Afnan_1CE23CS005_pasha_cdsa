#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};


struct Node* reverseLinkedList(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;    
        current->next = prev;   
        prev = current;         
        current = next;
    }

    return prev;  
}
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    
    while (last->next != NULL) {
        last = last->next;
    }

    
    last->next = new_node;
}


int main() {
    struct Node* head = NULL;


    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

    printf("Original List: \n");
    printList(head);


    head = reverseLinkedList(head);

    printf("Reversed List: \n");
    printList(head);

    return 0;
}
