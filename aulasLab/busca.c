#include <stdio.h>

int buscaBinaria (int a[], int k, int n);

int main (){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int resultado;
    int valorBusca;

    printf("Digite o valor que você deseja encontrar: ");
    scanf("%d", &valorBusca);

    resultado = buscaBinaria(a, valorBusca, 10);

    if(resultado == 1)
        printf("Valor encontrado!\n");
    else
        printf("Valor não econtrado!\n");

return 0;
}

int buscaBinaria (int a[], int k, int n){
    int inf, med, sup;
    inf = 0;
    sup = n-1;

    while(inf <= sup){
        med = (inf + sup)/2;

        if(a[med] > k)
            sup = med - 1;

        else if(a[med] < k)
            inf = med + 1;

        else
            return 1;
    }

    return 0;
}
