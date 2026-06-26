#ifndef QUEUE_H
#define QUEUE_H

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Queue {
    Node *front;
    Node *rear;
    int length;
} Queue;

void initQueue(Queue *queue);
void enqueue(Queue *queue, int value);
int dequeue(Queue *queue);
int front(Queue *queue);
int rear(Queue *queue);
int length(Queue *queue);
int isEmpty(Queue *queue);
void printQueue(Queue *queue);
void clearQueue(Queue *queue);
int queueSum(Queue *queue);
int queueMax(Queue *queue);
int queueMin(Queue *queue);
void copyQueue(Queue *source, Queue *destination);
void invertQueue(Queue *queue);
void removeEvenNumbers(Queue *queue);
void mergeQueues(Queue *queue1, Queue *queue2, Queue *destination);
int countOccurrences(Queue *queue, int value);
void simulateBankQueue(Queue *queue, int numberOfClients);

#endif