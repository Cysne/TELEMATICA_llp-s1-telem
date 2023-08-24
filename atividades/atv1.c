#include <stdio.h>

int main() {
    int tam = 5; 
    int l, c, mat[tam][tam];
    printf("Digite os elementos da matriz:\n");
    for(l = 0; l < tam; l++){
        for(c = 0; c< tam; c++){
            printf("Elemento [%d][%d]: ", l, c);
            scanf("%d", &mat[l][c]);
        }
    }
    printf("\nMatriz inserida:\n");
    for(l = 0; l < tam; l++){
        for(c = 0; c< tam; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Diagonal principal:\n");
    for(l = 0; l < tam; l++){
        printf("%d ", mat[l][l]); 
    }
    return 0;
}