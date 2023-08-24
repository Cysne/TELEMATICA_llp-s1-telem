#include <stdio.h>

int main() {
    int tam = 3; 
    int l, c, A[tam][tam], B[tam][tam], C[tam][tam];
    printf("Digite os elementos da matriz A:\n");
    for(l = 0; l < tam; l++){
        for(c = 0; c< tam; c++){
            printf("Elemento A[%d][%d]: ", l, c);
            scanf("%d", &A[l][c]);
        }
    }
    printf("Digite os elementos da matriz B:\n");
    for(l = 0; l < tam; l++){
        for(c = 0; c< tam; c++){
            printf("Elemento B[%d][%d]: ", l, c);
            scanf("%d", &B[l][c]);
        }
    }
    for(l = 0; l < tam; l++){
        for(c = 0; c< tam; c++){
            C[l][c] = A[l][c] + B[l][c];
        }
    }
    printf("\nMatriz soma C:\n");
    for(l = 0; l < tam; l++){
        for(c = 0; c< tam; c++){
            printf("%d ", C[l][c]);
        }
        printf("\n");
    }
    return 0;
}