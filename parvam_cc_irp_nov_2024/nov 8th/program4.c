
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data);


struct Node* insertAfter(struct Node* head, int key,
                         int newData) {
    struct Node* curr = head;

    
    while (curr != NULL) {
        if (curr->data == key)
            break;
        curr = curr->next;
    }


    if (curr == NULL)
        return head;

    
    struct Node* newNode = createNode(newData);
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

struct Node* createNode(int data) {
    struct Node* newNode
        = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
  
    
    struct Node* head = createNode(2);
    head->next = createNode(3);
    head->next->next = createNode(5);
    head->next->next->next = createNode(6);

    int key = 3, newData = 4;

    
    head = insertAfter(head, key, newData);

    printList(head);

    return 0;
}
