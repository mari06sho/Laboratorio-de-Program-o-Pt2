#include <stdio.h>
#include <stdlib.h>

int main() {
    int magic, guess;
    int tentativas = 3; 

    magic = rand() % 11; 

    do {
        printf("Digite sua tentativa:\n "); 
        scanf("%d", &guess);

        if (guess == magic) {
            printf("*** ACERTOOOOOOU ***\n");
            return 1; 
        } else {
            printf("*** ERROOOOOOOU ***\n");
        }

        tentativas--; 

    } while (tentativas > 0);

    printf("O número mágico era: %d\n", magic);

    return 0;
}

