// Escrever uma função que use passagem por referencia e receba três matrizes quadradas
// ( numero de linhas igual ao numero de colunas) A, B e C e calcule a Matriz soma C.
//   Onde C = A + B. Ou seja C[i][j] = A[i][j]+B[i][j].

#include <stdio.h>

void somaMatriz(int (*A)[3], int (*B)[3], int (*C)[3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
}

int main() {
  int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  int C[3][3];

  somaMatriz(A, B, C);

  printf("Matriz resultante C:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
