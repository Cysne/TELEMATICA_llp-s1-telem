//Criar um codigo em C que faça as seguintes  funcionalidades:
//1) Receba os dados que serão alocados em membros de uma estrutura;

//2) Gravar em um arquivo a estrutura que foi informada.

#include <stdio.h>
#include <string.h>

struct dados {
 int idade;
 char nome[50];
 char endereco[50];
 char telefone[50];
};
int main() {
    struct dados pessoa;
    FILE *arquivo;

    arquivo = fopen("atividade2.txt", "w");

    if (arquivo == NULL) {
        printf("Erro na abertura do arquivo\n");
        return 1;
    }

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    getchar();

    printf("Digite o nome: ");
    scanf("%[^\n]", pessoa.nome);
    getchar();

    printf("Digite o endereco: ");
    scanf("%[^\n]", pessoa.endereco);
    getchar();

    printf("Digite o telefone: ");
    fgets(pessoa.telefone, 50, stdin);

    // Remover o caractere de nova linha do telefone
    pessoa.telefone[strcspn(pessoa.telefone, "\n")] = '\0';

    fprintf(arquivo, "Idade: %d\nNome: %s\nEndereco: %s\nTelefone: %s\n", pessoa.idade, pessoa.nome, pessoa.endereco, pessoa.telefone);

    fclose(arquivo);

    return 0;
}
