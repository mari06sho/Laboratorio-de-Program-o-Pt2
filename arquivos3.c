/* Lendo sequencialmente um arquivo de acesso aleatório */
#include <stdio.h>

struct dadosCliente {
    int numConta;
    char sobrenome[15];
    char primNome[10];
    float saldo;
};

int main(void) {

    FILE *cfPtr;
    struct dadosCliente cliente;

    if ((cfPtr = fopen("credito.dat", "rb")) == NULL)
        printf("Arquivo nao pode ser aberto.\n");
    else {

        printf("%-6s%-16s%-11s%10s\n",
               "Conta", "Sobrenome", "Nome", "Saldo");

        while (!feof(cfPtr)) {

            fread(&cliente, sizeof(struct dadosCliente), 1, cfPtr);

            if (cliente.numConta != 0)
                printf("%-6d%-16s%-11s%10.2f\n",
                       cliente.numConta,
                       cliente.sobrenome,
                       cliente.primNome,
                       cliente.saldo);
        }
    }

    fclose(cfPtr);

    return 0;
}