#include <stdio.h>
#include <stdlib.h>
#include "queueExercicios.h"

int main() {
    Queue queue;
    Queue queue2;
    Queue copiedQueue;
    Queue mergedQueue;
    Queue bankQueue;

    initQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 21);
    enqueue(&queue, 34);
    enqueue(&queue, 45);
    enqueue(&queue, 58);

    printQueue(&queue);

    printf("Valor no rear: %d\n", rear(&queue));
    printf("Soma da fila: %d\n", queueSum(&queue));
    printf("Maior valor da fila: %d\n", queueMax(&queue));
    printf("Menor valor da fila: %d\n", queueMin(&queue));

    copyQueue(&queue, &copiedQueue);
    printf("Fila copiada\n");
    printQueue(&copiedQueue);

    invertQueue(&copiedQueue);
    printf("Fila copiada invertida\n");
    printQueue(&copiedQueue);

    printf("Ocorrencias do valor 34 na fila original: %d\n", countOccurrences(&queue, 34));

    removeEvenNumbers(&queue);
    printf("Fila original sem numeros pares\n");
    printQueue(&queue);

    initQueue(&queue2);
    enqueue(&queue2, 100);
    enqueue(&queue2, 200);
    enqueue(&queue2, 300);

    mergeQueues(&copiedQueue, &queue2, &mergedQueue);
    printf("Fila resultante da uniao das duas filas\n");
    printQueue(&mergedQueue);

    simulateBankQueue(&bankQueue, 5);

    clearQueue(&queue);
    clearQueue(&queue2);
    clearQueue(&copiedQueue);
    clearQueue(&mergedQueue);

    return 0;
}