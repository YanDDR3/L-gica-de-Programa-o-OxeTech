#include <stdio.h>

int buscalinear(int array[], int tam, int numero);

int main(){
  //busca linear
  int numeros [] = {7, 2, 1, 4, 10, 8, 6, 9, 5, 3};

  int encontrado = buscalinear (numeros, 10, 7);

  if (encontrado == 1) {
    printf("O numero esta no array.\n");
  } else {
    printf("O numero nao esta no array. \n");
  }

  return 0;
}

int buscalinear(int array[], int tam, int numero){
  for (int indice = 0; indice < tam; indice++) {
    if (array[indice] == numero){
      return 1;
    }
  }
 return 0;
}