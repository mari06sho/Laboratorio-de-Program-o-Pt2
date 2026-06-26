#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"
#include "exerciciosPropostos.h"

// 1. Insercao no final da lista
void insertEnd(Node **head, int value) {
    Node *newNode = createNode(value);
    if(newNode == NULL)
        return;

    if(*head == NULL) {
        *head = newNode;
        printf("Valor %d inserido no final.\n", value);
        return;
    }

    Node *current = *head;
    while(current->next != NULL)
        current = current->next;

    current->next = newNode;
    printf("Valor %d inserido no final.\n", value);
}

// 2. Insercao ordenada 
void insertSorted(Node **head, int value) {
    Node *newNode = createNode(value);
    if(newNode == NULL)
        return;

    if(*head == NULL || (*head)->data >= value) {
        newNode->next = *head;
        *head = newNode;
        printf("Valor %d inserido em ordem.\n", value);
        return;
    }

    Node *current = *head;
    while(current->next != NULL && current->next->data < value)
        current = current->next;

    newNode->next = current->next;
    current->next = newNode;
    printf("Valor %d inserido em ordem.\n", value);
}

// 3. Remocao do ultimo elemento
void removeLast(Node **head) {
    if(*head == NULL) {
        printf("Erro: lista vazia, nao e possivel remover.\n");
        return;
    }

    if((*head)->next == NULL) {
        printf("Valor %d removido do final.\n", (*head)->data);
        free(*head);
        *head = NULL;
        return;
    }

    Node *current = *head;
    while(current->next->next != NULL)
        current = current->next;

    printf("Valor %d removido do final.\n", current->next->data);
    free(current->next);
    current->next = NULL;
}

// 4. Impressao reversa da lista 
void printReverse(Node *head) {
    if(head == NULL) {
        printf("NULL -> ");
        return;
    }
    printReverse(head->next);
    printf("%d -> ", head->data);
}

// 5. Contagem de elementos
int countElements(Node *head) {
    int count = 0;
    Node *current = head;
    while(current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// 6. Verificacao de lista vazia
int isEmpty(Node *head) {
    return head == NULL;
}

// 7. Busca recursiva
Node *searchRecursive(Node *head, int target) {
    if(head == NULL) {
        printf("Valor %d nao encontrado.\n", target);
        return NULL;
    }
    if(head->data == target) {
        printf("Valor %d encontrado!\n", target);
        return head;
    }
    return searchRecursive(head->next, target);
}

// 8. Liberacao completa da memoria
void freeList(Node **head) {
    Node *current = *head;
    int count = 0;
    while(current != NULL) {
        Node *temp = current;
        current = current->next;
        free(temp);
        count++;
    }
    *head = NULL;
    printf("%d nos liberados da memoria.\n", count);
}

// 9. Inversao da lista
void reverseList(Node **head) {
    Node *previous = NULL;
    Node *current = *head;
    Node *next = NULL;

    while(current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    *head = previous;
    printf("Lista invertida.\n");
}

// 10. Copia de uma lista
Node *copyList(Node *head) {
    if(head == NULL)
        return NULL;

    Node *newHead = NULL;
    Node *tail = NULL;
    Node *current = head;

    while(current != NULL) {
        Node *newNode = createNode(current->data);
        if(newNode == NULL)
            return newHead;

        if(newHead == NULL) {
            newHead = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        current = current->next;
    }
    printf("Lista copiada com sucesso.\n");
    return newHead;
}

// 11. Concatenacao de listas
void concatLists(Node **head1, Node *head2) {
    if(head2 == NULL)
        return;

    if(*head1 == NULL) {
        *head1 = copyList(head2);
        return;
    }

    Node *current = *head1;
    while(current->next != NULL)
        current = current->next;

    current->next = copyList(head2);
    printf("Listas concatenadas com sucesso.\n");
}

// 12. Remocao de elementos repetidos
void removeDuplicates(Node **head) {
    Node *current = *head;
    int count = 0;

    while(current != NULL) {
        Node *runner = current;
        while(runner->next != NULL) {
            if(runner->next->data == current->data) {
                Node *temp = runner->next;
                runner->next = runner->next->next;
                free(temp);
                count++;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
    printf("%d elemento(s) repetido(s) removido(s).\n", count);
}

// 13. Maior elemento
int maxElement(Node *head) {
    if(head == NULL) {
        printf("Erro: lista vazia.\n");
        return -1;
    }
    int max = head->data;
    Node *current = head->next;
    while(current != NULL) {
        if(current->data > max)
            max = current->data;
        current = current->next;
    }
    return max;
}

// 14. Menor elemento
int minElement(Node *head) {
    if(head == NULL) {
        printf("Erro: lista vazia.\n");
        return -1;
    }
    int min = head->data;
    Node *current = head->next;
    while(current != NULL) {
        if(current->data < min)
            min = current->data;
        current = current->next;
    }
    return min;
}

// 15. Soma dos elementos
int sumElements(Node *head) {
    int sum = 0;
    Node *current = head;
    while(current != NULL) {
        sum += current->data;
        current = current->next;
    }
    return sum;
}

// 16. Media dos elementos
float avgElements(Node *head) {
    if(head == NULL) {
        printf("Erro: lista vazia.\n");
        return 0.0;
    }
    int sum = sumElements(head);
    int count = countElements(head);
    return (float) sum / count;
}