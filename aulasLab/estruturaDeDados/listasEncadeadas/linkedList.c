#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

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

    printf("Valor %d inserido.\n", value);

    // desafio 6.2
    int count = 0;
    Node *current = *head;
    while(current != NULL) {
        count++;
        current = current->next;
    }
    printf("A lista agora tem %d elemento(s).\n", count);
}


void printList(Node *head) {
    Node *current = head;
    int position = 0;
    int count = 0;

    // desafio 7.2
    Node *temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("Total de nos: %d\n", count);

    while(current != NULL) {
        printf("Posicao %d | Endereco: %p | Valor: %d -> \n", position, (void *)current, current->data);
        position++;
        current = current->next;
    }
    printf("NULL\n");
}

// desafio 8.2 - imprimindo recursivo
void printRecursive(Node *head) {
    if(head == NULL) {
        printf("NULL -> ");
        return;
    }
    printRecursive(head->next);
    printf("%d -> ", head->data);
}

// conta recursivamenye
int countRecursive(Node *head) {
    if(head == NULL)
        return 0;
    return 1 + countRecursive(head->next);
}

// soma tudo com a recursão
int sumRecursive(Node *head) {
    if(head == NULL)
        return 0;
    return head->data + sumRecursive(head->next);
}

void search(Node *head, int target) {
    Node *current = head;
    int position = 0;
    int comparisons = 0;
    int occurrences = 0;
    int firstPosition = -1;

    while(current != NULL) {
        comparisons++;
        if(current->data == target) {
            occurrences++;
            if(firstPosition == -1)
                firstPosition = position;
        }
        position++;
        current = current->next;
    }

    printf("\nBuscando valor %d:\n", target);
    printf("Comparacoes realizadas: %d\n", comparisons);

    if(occurrences == 0) {
        printf("Elemento nao encontrado.\n");
    } else {
        printf("Elemento encontrado na posicao: %d\n", firstPosition);
        printf("Ocorrencias na lista: %d\n", occurrences);
        if(occurrences > 1)
            printf("Atencao: elemento aparece mais de uma vez!\n");
    }
}

void removeBeginning(Node **head) {
    if(*head == NULL) {
        printf("Erro: lista vazia, nao e possivel remover.\n");
        return;
    }

    Node *temp = *head;
    int value = temp->data;

    *head = (*head)->next;
    free(temp);

    printf("Valor removido: %d\n", value);
}

// remove todas as ocorrencias e conta quantas foram removidas
void removeValue(Node **head, int target) {
    Node *current = *head;
    Node *previous = NULL;
    int count = 0;

    while(current != NULL) {
        if(current->data == target) {
            Node *temp = current;

            if(previous == NULL)
                *head = current->next;
            else
                previous->next = current->next;

            current = current->next;
            free(temp);
            count++;
        } else {
            previous = current;
            current = current->next;
        }
    }

    if(count == 0)
        printf("Valor %d nao encontrado na lista.\n", target);
    else
        printf("Valor %d removido %d vez(es).\n", target, count);
}

// remove apenas a ultima ocorrencia
void removeLastOccurrence(Node **head, int target) {
    Node *current = *head;
    Node *previous = NULL;
    Node *lastFound = NULL;
    Node *beforeLast = NULL;

    while(current != NULL) {
        if(current->data == target) {
            lastFound = current;
            beforeLast = previous;
        }
        previous = current;
        current = current->next;
    }

    if(lastFound == NULL) {
        printf("Valor %d nao encontrado na lista.\n", target);
        return;
    }

    if(beforeLast == NULL)
        *head = lastFound->next;
    else
        beforeLast->next = lastFound->next;

    free(lastFound);
    printf("Ultima ocorrencia de %d removida.\n", target);
}