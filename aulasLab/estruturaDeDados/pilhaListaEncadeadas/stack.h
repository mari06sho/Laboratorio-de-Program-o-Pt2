#ifndef STACK_H
#define STACK_H

typedef struct Node {
int data;
struct Node *next;
} Node;

typedef struct Stack {
Node *top;
int length;
} Stack;

void initStack(Stack *stack);

void push(Stack *stack, int value);

int pop(Stack *stack);

int peek(Stack *stack);

int length(Stack *stack);

int isEmpty(Stack *stack);

void printStack(Stack *stack);

void clearStack(Stack *stack);

int isPalindrome(char str[]);

#endif