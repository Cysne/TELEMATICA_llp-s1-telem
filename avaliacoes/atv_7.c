//Implementar uma função recursiva que faz um Somatorio de N. 
//Por Exemplo: Somatorio de 5 é (5 + 4 + 3 + 2 + 1).

#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){
    if(n == 1){
        return 1;
    }else{
        return n + somatorio(n-1);
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Somatorio de %d = %d", n, somatorio(n));
    return 0;
}
