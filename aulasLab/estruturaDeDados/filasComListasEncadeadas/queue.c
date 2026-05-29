#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Queue {
    Node *front;
    Node *rear;
    int length;
} Queue;

void initQueue(Queue *queue) {
    queue->front = NULL;
    queue->rear = NULL;
    queue->length = 0;
}

void enqueue(Queue *queue,
int value) {
    Node *newNode =
    (Node *) malloc(sizeof(Node));
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
    
    queue->length--;
    
    return value;
}

int front(Queue *queue) {
    if(queue->front == NULL) {
        printf("Fila vazia\n");
        return -1;
    }
    
    return queue->front->data;
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