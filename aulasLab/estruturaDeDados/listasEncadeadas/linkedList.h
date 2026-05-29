#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int value);

void insertBeginning(Node **head, int value);
void printList(Node *head);
#endif