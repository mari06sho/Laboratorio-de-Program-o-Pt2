#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
    char *s;
    int t;

    s = malloc(80);
    
    if(!s){
        printf("Falha na alocação de memória\n");
        exit(1);
    }

    fgets(s, 80, stdin);

    for (t = strlen(s) - 1; t >= 0; t--)
        putchar(s[t]);
    
    free(s);
}