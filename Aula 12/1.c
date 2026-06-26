#include <stdio.h>

int main(){
  // Motivaçãp: Ler 5 números inteiro e depois imprimir eles na tela. 

  int n1, n2, n3, n4, n5;

  printf("Digite o 1° numero: ");
  scanf("%d", &n1);

  printf("Digite o 2° numero: ");
  scanf("%d", &n2);

  printf("Digite o 3° numero: ");
  scanf("%d", &n3);

  printf("Digite o 4° numero: ");
  scanf("%d", &n4);

  printf("Digite o 5° numero: ");
  scanf("%d", &n5);

  printf("\nLista dos numeros digitados: %d %d %d %d %d\n", n1, n2, n3, n4, n5);

  return 0;
} 