#include <stdio.h>
#include <stdlib.h>
#define TAM_FOLHA 10

typedef struct {
    int vazio;      //indica se o registro está vazio (1) ou ocupado (0)
    char *nome[50];
    int matricula;
    double salario;

} funcionario;      // número de funcionários no banco de dados

//Incializa os registros como vazio

void initRegistros(funcionario * f){
    int i;
    for (int i = 0; i < TAM_FOLHA; i++)
        f[i].vazio = 1;
};

funcionario * buscaFuncionario(funcionario * f, double salario, int maiorMenor){
    
};

void exibeFuncionario (funcionario * f, long matricula){
    int i;
    for (int i = 0; i < TAM_FOLHA; i++)
        if (f[i].matricula == matricula )
            printf("Nome %s\n", f[i].nome);
            printf("Matricula %s\n", f[i].matricula);
            printf("Salário %s\n", f[i].salario);
};

funcionario bancoFunc[TAM_FOLHA];

int main(){
    
    initRegistros(bancoFunc);


    return 0;
}
