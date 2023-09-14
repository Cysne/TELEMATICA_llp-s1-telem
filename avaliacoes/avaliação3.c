//Criar um codigo em C que faça as seguintes  funcionalidades:
//1) Receba os dados que serão alocados em membros de uma estrutura;

//2) Gravar em um arquivo a estrutura que foi informada.


#include <stdio.h>

struct dados {
  int idade;
  char nome[50];
  char endereco[50];
  char telefone[50];
};

int main() {
  struct dados pessoa;
  FILE *arquivo;

  arquivo = fopen("arquivo.txt", "wb"); 

  if (arquivo == NULL) {
    printf("Erro na abertura do arquivo\n");
    return 1;
  }

  printf("Digite a idade: ");
  scanf("%d", &pessoa.idade);

  printf("Digite o nome: ");
  scanf("%s", pessoa.nome);

  printf("Digite o endereco: ");
  scanf("%s", pessoa.endereco);

  printf("Digite o telefone: ");
  scanf("%s", pessoa.telefone);

  fwrite(&pessoa, sizeof(struct dados), 1, arquivo);

  fclose(arquivo);

  return 0;
}
