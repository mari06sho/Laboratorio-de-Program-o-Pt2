/* Criando sequencialmente um programa de acesso aleatório */
#include <stdio.h>

struct dadosCliente {
    int numConta;
    char sobrenome[15];
    char primNome[10];
    float saldo;
};

int main(void) {
    int i;
    struct dadosCliente clienteNulo = {0, "", "", 0.0};
    FILE *cfPtr;

    if ((cfPtr = fopen("credito.dat", "w")) == NULL)
        printf("Arquivo nao pode ser aberto.\n");
    else {

        for (i = 1; i <= 100; i++)
            fwrite(&clienteNulo, sizeof(struct dadosCliente), 1, cfPtr);

        fclose(cfPtr);
    }

    return 0;
}