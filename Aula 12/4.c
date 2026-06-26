#include <stdio.h>

int main(){
  // Motivaçãp: Ler 5 números inteiro e depois imprimir eles na tela. 

  // numeros: [[ ][ ][ ][ ][ ]]
  // indices: [[0][1][2][3][4]]

  int numeros[5];

  for (int indice = 0; indice < 5; indice++){
    printf("Digite o %d° numero: ", indice + 1);
    scanf("%d", &numeros[indice]);
  }

  printf("\nLista dos numeros digitados: ");

  for (int indice = 0; indice < 5; indice++){
    printf("%d ", numeros[indice]);
  }

  return 0;
} 