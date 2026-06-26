#include <stdio.h>

int main(){
  // Motivaçãp: Ler 5 números inteiro e depois imprimir eles na tela. 

  int numeros[5];

  // numeros: [[ ][ ][ ][ ][ ]]
  // indices: [[0][1][2][3][4]]

  numeros[0] = 1;
  numeros[1] = 2;
  numeros[2] = 3;
  numeros[3] = 4;
  numeros[4] = 5;

  printf("\nLista dos numeros digitados: %d %d %d %d %d\n", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]);

  return 0;
} 