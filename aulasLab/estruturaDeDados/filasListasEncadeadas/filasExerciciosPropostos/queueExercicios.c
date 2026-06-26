#include <stdio.h>
#include <stdlib.h>
#include "queueExercicios.h"

void initQueue(Queue *queue) {
    queue->front = NULL;
    queue->rear = NULL;
    queue->length = 0;
}

void enqueue(Queue *queue, int value) {
    if(value < 0) {
        printf("Valor negativo nao permitido\n");
        return;
    }

    Node *newNode = (Node *) malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Erro de alocacao\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if(queue->rear == NULL) {
        queue->front = newNode;
        queue->rear = newNode;
    }
    else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }

    queue->length++;

    printf("Inserido: %d\n", value);
    printf("Tamanho da fila: %d\n", queue->length);
}

int dequeue(Queue *queue) {
    if(queue->front == NULL) {
        printf("Fila vazia\n");
        return -1;
    }

    Node *temp = queue->front;
    int value = temp->data;
    queue->front = temp->next;

    if(queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp);

    if(queue->length > 0) {
        queue->length--;
    }

    printf("Removido: %d\n", value);
    printf("Tamanho da fila: %d\n", queue->length);

    return value;
}

int front(Queue *queue) {
    if(queue->front == NULL) {
        printf("Fila vazia\n");
        return -1;
    }

    return queue->front->data;
}

int rear(Queue *queue) {
    if(queue->rear == NULL) {
        printf("Fila vazia\n");
        return -1;
    }

    return queue->rear->data;
}

int length(Queue *queue) {
    return queue->length;
}

int isEmpty(Queue *queue) {
    return queue->front == NULL;
}

void printQueue(Queue *queue) {
    Node *current = queue->front;
    printf("Front -> ");
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

void clearQueue(Queue *queue) {
    while(!isEmpty(queue)) {
        dequeue(queue);
    }
}

int queueSum(Queue *queue) {
    Node *current = queue->front;
    int sum = 0;

    while(current != NULL) {
        sum += current->data;
        current = current->next;
    }

    return sum;
}

int queueMax(Queue *queue) {
    if(queue->front == NULL) {
        printf("Fila vazia\n");
        return -1;
    }

    Node *current = queue->front;
    int max = current->data;
    current = current->next;

    while(current != NULL) {
        if(current->data > max) {
            max = current->data;
        }
        current = current->next;
    }

    return max;
}

int queueMin(Queue *queue) {
    if(queue->front == NULL) {
        printf("Fila vazia\n");
        return -1;
    }

    Node *current = queue->front;
    int min = current->data;
    current = current->next;

    while(current != NULL) {
        if(current->data < min) {
            min = current->data;
        }
        current = current->next;
    }

    return min;
}

static void insertNode(Queue *queue, int value) {
    Node *newNode = (Node *) malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Erro de alocacao\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if(queue->rear == NULL) {
        queue->front = newNode;
        queue->rear = newNode;
    }
    else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }

    queue->length++;
}

void copyQueue(Queue *source, Queue *destination) {
    initQueue(destination);

    Node *current = source->front;
    while(current != NULL) {
        insertNode(destination, current->data);
        current = current->next;
    }
}

void invertQueue(Queue *queue) {
    Node *previous = NULL;
    Node *current = queue->front;
    Node *next = NULL;

    queue->rear = queue->front;

    while(current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    queue->front = previous;
}

void removeEvenNumbers(Queue *queue) {
    Node *current = queue->front;
    Node *previous = NULL;

    while(current != NULL) {
        if(current->data % 2 == 0) {
            Node *temp = current;

            if(previous == NULL) {
                queue->front = current->next;
            }
            else {
                previous->next = current->next;
            }

            if(current == queue->rear) {
                queue->rear = previous;
            }

            current = current->next;
            free(temp);
            queue->length--;
        }
        else {
            previous = current;
            current = current->next;
        }
    }
}

void mergeQueues(Queue *queue1, Queue *queue2, Queue *destination) {
    initQueue(destination);

    Node *current = queue1->front;
    while(current != NULL) {
        insertNode(destination, current->data);
        current = current->next;
    }

    current = queue2->front;
    while(current != NULL) {
        insertNode(destination, current->data);
        current = current->next;
    }
}

int countOccurrences(Queue *queue, int value) {
    Node *current = queue->front;
    int count = 0;

    while(current != NULL) {
        if(current->data == value) {
            count++;
        }
        current = current->next;
    }

    return count;
}

void simulateBankQueue(Queue *queue, int numberOfClients) {
    int i;

    initQueue(queue);

    for(i = 1; i <= numberOfClients; i++) {
        insertNode(queue, i);
        printf("Cliente %d chegou e entrou na fila\n", i);
    }

    while(!isEmpty(queue)) {
        int client = queue->front->data;
        dequeue(queue);
        printf("Cliente %d foi atendido no caixa\n", client);
    }
}