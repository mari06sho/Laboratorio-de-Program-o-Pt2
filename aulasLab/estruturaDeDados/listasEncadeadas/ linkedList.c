#include <stdio.h>
    
typedef struct Node {
int data;
struct Node *next;
} Node;

    Node *createNode(int value) {
    Node *newNode = (Node *) malloc(sizeof(Node));
    
    if(newNode == NULL) {
        printf("Erro de alocacao\n");
        return NULL;
    }
    
    newNode->data = value;
    newNode->next = NULL;
    
    return newNode;
    }

    void insertBeginning(Node **head, int value) {
    
        Node *newNode = createNode(value);
    
        if(newNode == NULL)
        return;
    
        newNode->next = *head;
    
        *head = newNode;

    }

    void printList(Node *head) {
        Node *current = head;
        
        while(current != NULL) {
            printf("%d -> ", current->data);
            current = current->next;
        }

        printf("NULL\n");
    }

    void printRecursive(Node *head) {
        if (head == NULL) {
            printf("NULL\n");
            return;
        }
        
        printf("%d -> ", head->data);
        printRecursive(head->next);
    }

    Node *search(Node *head, int target) {
        Node *current = head;
        while(current != NULL) {
            if(current->data == target)
            return current;
            current = current->next;
        }
        return NULL;
    }

    void removeBeginning(Node **head) {
        if(*head == NULL)
        return;

        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
    }

    void removeValue(Node **head, int target) {
        Node *current = *head;
        Node *previous = NULL;
        
        while(current != NULL && current->data != target) {
                previous = current;
                current = current->next;
        }
            
            if(current == NULL)
            return;
            
            if(previous == NULL)
            *head = current->next;
            
            else
            previous->next = current->next;
            
            free(current);
    }