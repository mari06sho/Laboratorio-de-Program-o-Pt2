#include <stdio.h>

int buscaBin(int a[], int k, int n, int inf, int sup){
    if(sup < inf)
        return 0;

    int med = (inf + sup) / 2;

    if(a[med] > k)
        return buscaBin(a, k, n, inf, med - 1);
        
    else if(a[med] < k)
        return buscaBin(a, k, n, med + 1, sup);

    else
        return 1;
}
    
int main (){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int resultado;
    int valorBusca;

    printf("Digite o valor que você deseja encontrar: ");
    scanf("%d", &valorBusca);

    resultado = buscaBin(a, valorBusca, 10, 0, 9);

    if(resultado == 1)
        printf("Valor encontrado!\n");
    else
        printf("Valor não encontrado!\n");

    return 0;
}