#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(){
    enqueue(&queue, 101);

    enqueue(&queue, 102);

    enqueue(&queue, 103);
    
    printQueue(&queue);
    
    printf("Atendido: %d\n", 
        dequeue(&queue));
        
    printQueue(&queue);

    return 0;
}