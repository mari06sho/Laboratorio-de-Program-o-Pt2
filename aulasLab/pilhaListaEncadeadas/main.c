#include <stdio.h>
#include "stack.h"
int main() {
    Stack stack;
    
    initStack(&stack);
    
    push(&stack, 10);
    
    push(&stack, 20);
    
    push(&stack, 30);
    
    printStack(&stack);
    
    printf("Topo: %d\n", peek(&stack));
    
    printf("Tamanho: %d\n", length(&stack));
    
    printf("Removido: %d\n", pop(&stack));
    
    printStack(&stack);
    
    printf("Tamanho: %d\n", length(&stack));
    
    if(isPalindrome("arara")) {
        printf("arara eh palindromo\n");
    } else {
        printf("arara nao eh palindromo\n");
    }
    
    clearStack(&stack);
    
    return 0;
}