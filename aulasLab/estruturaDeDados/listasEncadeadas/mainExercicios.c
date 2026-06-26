#include <stdio.h>
#include "linkedList.h"
#include "exerciciosPropostos.h"

int main() {
    Node *head = NULL;

    printf("1. Insercao no final \n");
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    printList(head);
   
    printf("\n 2. Insercao ordenada \n");
    Node *sorted = NULL;
    insertSorted(&sorted, 30);
    insertSorted(&sorted, 10);
    insertSorted(&sorted, 20);
    insertSorted(&sorted, 5);
    printList(sorted);
 
    printf("\n 3. Remocao do ultimo  \n");
    printList(head);
    removeLast(&head);
    printList(head);
    
    printf("\n 4. Impressao reversa \n");
    printReverse(head);
    printf("\n");
 
    printf("\n5. Contagem de elementos \n");
    printf("Total de elementos: %d\n", countElements(head));

    printf("\n 6. Verificacao de lista vazia \n");
    printf("head esta vazia? %s\n", isEmpty(head) ? "Sim" : "Nao");
    Node *vazia = NULL;
    printf("vazia esta vazia? %s\n", isEmpty(vazia) ? "Sim" : "Nao");
   
    printf("\n 7. Busca recursiva \n");
    searchRecursive(head, 10);
    searchRecursive(head, 99);
 
    printf("\n 8. Liberacao completa da memoria \n");
    Node *temp = NULL;
    insertEnd(&temp, 1);
    insertEnd(&temp, 2);
    insertEnd(&temp, 3);
    printList(temp);
    freeList(&temp);
    printf("Lista apos liberacao: %s\n", isEmpty(temp) ? "vazia" : "com elementos");

    printf("\n 9. Inversao da lista \n");
    printList(head);
    reverseList(&head);
    printList(head);
   
    printf("\n 10. Copia de lista \n");
    Node *copia = copyList(head);
    printf("Original: ");
    printList(head);
    printf("Copia:    ");
    printList(copia);
    
    printf("\n11. Concatenacao de listas \n");
    Node *lista1 = NULL;
    Node *lista2 = NULL;
    insertEnd(&lista1, 1);
    insertEnd(&lista1, 2);
    insertEnd(&lista2, 3);
    insertEnd(&lista2, 4);
    printf("Lista 1: ");
    printList(lista1);
    printf("Lista 2: ");
    printList(lista2);
    concatLists(&lista1, lista2);
    printf("Apos concatenacao: ");
    printList(lista1);
 
    printf("\n 12. Remocao de elementos repetidos \n");
    Node *dupli = NULL;
    insertEnd(&dupli, 5);
    insertEnd(&dupli, 3);
    insertEnd(&dupli, 5);
    insertEnd(&dupli, 1);
    insertEnd(&dupli, 3);
    printf("Antes: ");
    printList(dupli);
    removeDuplicates(&dupli);
    printf("Depois: ");
    printList(dupli);
     
    printf("\n13. Maior elemento \n");
    printf("Maior: %d\n", maxElement(head));

    printf("\n14. Menor elemento \n");
    printf("Menor: %d\n", minElement(head));
    
    printf("\n 15. Soma dos elementos \n");
    printf("Soma: %d\n", sumElements(head));

    printf("\n 16. Media dos elementos \n");
    printf("Media: %.2f\n", avgElements(head));

    return 0;
}