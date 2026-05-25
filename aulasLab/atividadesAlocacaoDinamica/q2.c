#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, soma = 0;
    float media;
    int *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma/n;

    printf("A soma e a média são, respectivamente: %d e %f ", soma, media);
}