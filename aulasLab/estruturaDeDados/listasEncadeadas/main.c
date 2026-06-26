#include <stdio.h>
#include "linkedList.h"

int main() {
    Node *head = NULL;

    // editei para teste do desafio 6.2
    insertBeginning(&head, 10);
    insertBeginning(&head, 20);
    insertBeginning(&head, 35);
    insertBeginning(&head, 47);
    insertBeginning(&head, 58);

    printf("\nLista final: ");
    printList(head);

    printf("\nLista em ordem reversa: ");
    printRecursive(head);

    printf("\nTotal de nos (recursivo): %d\n", countRecursive(head));
    printf("Soma dos elementos: %d\n", sumRecursive(head));

    search(head, 35);  // existe
    search(head, 99);  // nao existe

    removeBeginning(&head);
    removeBeginning(&head);

    printf("\nLista apos remocoes: ");
    printList(head);

    // testa lista vazia
    Node *empty = NULL;
    removeBeginning(&empty);

    // testa remocao por valor
    insertBeginning(&head, 20); 
    printf("\nLista antes da remocao: ");
    printList(head);

    removeValue(&head, 20);  
    printf("\nLista apos removeValue(20): ");
    printList(head);

    // testa remocao da ultima ocorrencia
    insertBeginning(&head, 10); 
    insertBeginning(&head, 10);
    printf("\nLista antes de removeLastOccurrence: ");
    printList(head);

    removeLastOccurrence(&head, 10);
    printf("\nLista apos removeLastOccurrence(10): ");
    printList(head);

    return 0;
}