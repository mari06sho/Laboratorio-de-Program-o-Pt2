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
    int length(Queue *queue);
    int isEmpty(Queue *queue);
    void printQueue(Queue *queue);
    void clearQueue(Queue *queue);

#endif