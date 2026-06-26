#ifndef EXERCICIOSPROPOSTOS_H
#define EXERCICIOSPROPOSTOS_H

#include "linkedList.h"

void insertEnd(Node **head, int value);
void insertSorted(Node **head, int value);
void removeLast(Node **head);
void printReverse(Node *head);
int countElements(Node *head);
int isEmpty(Node *head);
Node *searchRecursive(Node *head, int target);
void freeList(Node **head);
void reverseList(Node **head);
Node *copyList(Node *head);
void concatLists(Node **head1, Node *head2);
void removeDuplicates(Node **head);
int maxElement(Node *head);
int minElement(Node *head);
int sumElements(Node *head);
float avgElements(Node *head);

#endif