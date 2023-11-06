//Implementar uma PIlha usando uma lista Encadeada usando as seguintes operações:
//1) Verificar o Topo da Pilha. Consiste na verificação da existencia de um elemento na Pilha;
//2) Implementar o Push (é a inserção de um elemento na Pilha alterando a informação do Topo);
//3) Implementar o Pop (é a retirada de um elemento da Pilha, ou seja é alterado o Topo com o elemnto logo abaixo).
//4) Evidenciar a execução das operações acima mostrando o conteúdo da pilha a partir do Topo.


#include <stdio.h>
#include <stdlib.h>

// Define a estrutura Elemento que representa os elementos da pilha.
typedef struct Elemento {
    int valor;
    struct Elemento* proximo;
} Elemento;

// Define a estrutura Pilha que representa a própria pilha.
typedef struct Pilha {
    Elemento* topo;
} Pilha;

// Função para criar uma nova pilha vazia.
Pilha* criarPilha() {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha)); // Aloca memória para a pilha.
    pilha->topo = NULL; // Inicializa o topo da pilha como NULL (pilha vazia).
    return pilha;
}

// Função para empilhar (inserir) um elemento na pilha.
void empilhar(Pilha* pilha, int valor) {
    Elemento* novoElemento = (Elemento*) malloc(sizeof(Elemento)); // Aloca memória para o novo elemento.
    novoElemento->valor = valor; // Define o valor do novo elemento.
    novoElemento->proximo = pilha->topo; // Aponta o próximo para o antigo topo.
    pilha->topo = novoElemento; // Atualiza o topo da pilha para o novo elemento.
}

// Função para desempilhar (remover) um elemento da pilha.
int desempilhar(Pilha* pilha) {
    if (pilha->topo == NULL) { // Verifica se a pilha está vazia.
        printf("Pilha vazia!\n");
        return -1; // Retorna -1 para indicar erro.
    }
    Elemento* elemento = pilha->topo; // Pega o elemento no topo.
    int valor = elemento->valor; // Obtém o valor do elemento.
    pilha->topo = elemento->proximo; // Atualiza o topo da pilha para o próximo elemento.
    free(elemento); // Libera a memória do elemento desempilhado.
    return valor; // Retorna o valor desempilhado.
}

// Função para obter o valor do elemento no topo da pilha.
int topo(Pilha* pilha) {
    if (pilha->topo == NULL) { // Verifica se a pilha está vazia.
        printf("Pilha vazia!\n");
        return -1; // Retorna -1 para indicar erro.
    }
    return pilha->topo->valor; // Retorna o valor do elemento no topo da pilha.
}

// Função para exibir todos os elementos da pilha, começando pelo topo.
void exibir(Pilha* pilha) {
    if (pilha->topo == NULL) { // Verifica se a pilha está vazia.
        printf("Pilha vazia!\n");
        return;
    }
    Elemento* elemento = pilha->topo; // Começa pelo topo da pilha.
    while (elemento != NULL) { // Percorre a pilha até o final.
        printf("%d\n", elemento->valor); // Imprime o valor do elemento.
        elemento = elemento->proximo; // Move para o próximo elemento.
    }
}

int main() {
    Pilha* pilha = criarPilha(); // Cria uma pilha vazia.

    empilhar(pilha, 1); // Empilha o valor 1.
    empilhar(pilha, 2); // Empilha o valor 2.
    empilhar(pilha, 3); // Empilha o valor 3.

    printf("Topo da pilha: %d\n", topo(pilha)); // Exibe o valor no topo da pilha.

    printf("Desempilhando...\n");
    desempilhar(pilha); // Desempilha o elemento no topo.

    printf("Topo da pilha após desempilhar: %d\n", topo(pilha)); // Exibe o novo valor no topo da pilha.

    printf("Exibindo pilha...\n");
    exibir(pilha); // Exibe todos os elementos da pilha.

    return 0;
}
