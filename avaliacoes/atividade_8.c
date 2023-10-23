// Implementar uma Fila usando uma Estrutura Encadeada com um ponteiro que aponta para o primeiro elemento da Fila e o ultimo elemento da Fila aponta para null.
// Criar as funcionalidades :
// 1) Inserir um elemento na Fila;
// 2) Retirar o primeiro elemento da Fila; 
// 3) Percorrer a Fila do inicio até o fim mostrando todos os elementos.
// Printar a execução do programa para evidenciar a realização da tarefa e atualizar o github.

#include <stdio.h>
#include <stdlib.h>

typedef struct no {  // cria uma struct para armazenar os dados
    int valor;
    struct no *prox;
} no;

typedef struct fila {  // cria uma struct para armazenar os dados da fila
    no *inicio;
    no *fim;
} fila;

void inserir(fila *f, int valor) {  // função para inserir um elemento na fila
    no *novo = (no*) malloc(sizeof(no));  // aloca memória para o novo elemento
    novo->valor = valor;  // atribui o valor ao novo elemento
    novo->prox = NULL;  // o próximo elemento do novo elemento aponta para null

    if (f->inicio == NULL) {  // se o início da fila for null
        f->inicio = novo;  // o início da fila recebe o novo elemento
    } else {  // se não
        f->fim->prox = novo;  // o próximo elemento do fim da fila recebe o novo elemento
    }

    f->fim = novo;  // o fim da fila recebe o novo elemento
}


void remover(fila *f) {  // função para remover o primeiro elemento da fila
    if (f->inicio == NULL) {  // se o início da fila for null
        printf("Fila vazia!\n");  // printa que a fila está vazia
    } else {  // se não
        no *aux = f->inicio;  // cria um ponteiro auxiliar que aponta para o início da fila
        f->inicio = f->inicio->prox;  // o início da fila recebe o próximo elemento do início da fila
        free(aux);  // libera a memória do ponteiro auxiliar
    }
}

void percorrer(fila *f) {  // função para percorrer a fila
    no *aux = f->inicio;  // cria um ponteiro auxiliar que aponta para o início da fila

    while (aux != NULL) {  // enquanto o ponteiro auxiliar for diferente de null
        printf("%d ", aux->valor);  // printa o valor do ponteiro auxiliar
        aux = aux->prox;  // o ponteiro auxiliar recebe o próximo elemento
    }

    printf("\n");  // printa uma quebra de linha
}

int main() {
    fila *f = (fila*) malloc(sizeof(fila));  // aloca memória para a fila
    f->inicio = NULL;  // o início da fila aponta para null
    f->fim = NULL;  // o fim da fila aponta para null

    inserir(f, 1);  // insere o valor 1 na fila
    inserir(f, 2);  // insere o valor 2 na fila
    inserir(f, 3);  // insere o valor 3 na fila
    inserir(f, 4);  // insere o valor 4 na fila
    inserir(f, 5);  // insere o valor 5 na fila

    percorrer(f);  // percorre a fila

    remover(f);  // remove o primeiro elemento da fila
    remover(f);  // remove o primeiro elemento da fila

    percorrer(f);  // percorre a fila

    return 0;
}
