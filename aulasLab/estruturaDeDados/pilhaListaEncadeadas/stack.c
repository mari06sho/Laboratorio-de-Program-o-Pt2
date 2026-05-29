#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

void initStack(Stack *stack) {
    stack->top = NULL;
    stack->length = 0;
}

void push(Stack *stack, int value) {
    Node *newNode = (Node *) malloc(sizeof(Node));
    
    if(newNode == NULL) {
        printf("Erro de alocacao\n");
        return;
    }

    newNode->data = value;
    
    newNode->next = stack->top;

    stack->top = newNode;
    
    stack->length++;
}

int pop(Stack *stack) {
    if(isEmpty(stack)) {
        printf("Pilha vazia\n");
        return -1;
    }
    
    Node *temp = stack->top;

    int value = temp->data;
    
    stack->top = temp->next;
    
    free(temp);
    
    stack->length--;
    
    return value;
}

int peek(Stack *stack) {
    if(isEmpty(stack)) {
        printf("Pilha vazia\n");
        return -1;
    }
    
    return stack->top->data;
}

int length(Stack *stack) {
    return stack->length;
}

int isEmpty(Stack *stack) {
    return stack->top == NULL;
}

void printStack(Stack *stack) {
        Node *current = stack->top;
        
        printf("Topo -> ");
        
        while(current != NULL) {
            printf("%d -> ", current->data);
            current = current->next;
        }
        
        printf("NULL\n");
    }
    
    void clearStack(Stack *stack) {

        while(!isEmpty(stack)) {
            pop(stack);
        }
    }
    int isPalindrome(char str[]) {
        Stack stack;
        
        initStack(&stack);
        
        int len = strlen(str);
        
        for(int i = 0; i < len; i++) {
            push(&stack, str[i]);
        }
        
        for(int i = 0; i < len; i++) {
            char c = pop(&stack);
            if(str[i] != c) {
                clearStack(&stack);
                return 0;
            }
        }
        return 1;
}