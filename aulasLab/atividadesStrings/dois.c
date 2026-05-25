#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void table (int p[4][10]){
    int i, j;
    for (j = 1; j < 11; j++){
        for (i = 1; i < 5; i++){
            
        }
    }
}

void show(int p[4][10]){
    int i, j;
    
    printf("%10s %10s %10s %10s\n", "N", "N^2", "N^3", "N^4");

    for (j = 1; j < 11; j++){
        for (i = 1; i < 5; i++){
            printf("%10d", p[i - j][j - i]);
        }
        printf("/n");
    }
}