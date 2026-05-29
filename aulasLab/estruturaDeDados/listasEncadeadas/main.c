#include <stdio.h>
#include "linkedList.h"
int main() {
    Node *head = NULL;
    
    insertBeginning(&head, 10);
    printList(head);
    
    return 0;
}