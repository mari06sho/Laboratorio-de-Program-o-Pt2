#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
} aluno;

int main() {

    aluno a1;
    
    a1.idade = 18;
    strcpy(a1.nome, "Joao");

    printf("nome: %s\n", a1.nome);
    printf("Idade: %d\n", a1.idade);
}