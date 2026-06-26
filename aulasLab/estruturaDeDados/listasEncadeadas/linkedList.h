#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int value);

void insertBeginning(Node **head, int value);
void printList(Node *head);
// prototipos novos do desafio 8.2 de recursão
void printRecursive(Node *head);
int countRecursive(Node *head);
int sumRecursive(Node *head);
void search(Node *head, int target);
// prototipo do desafio 10.2 de remocao
void removeBeginning(Node **head);
// prototipo do desafio 11 de remocao por valor
void removeValue(Node **head, int target);
void removeLastOccurrence(Node **head, int target);

#endif