#include <stdio.h>

int main(){

    char nome [20];
    float peso;
    float altura;
    
    //Entrada de Dados
    
    printf(" bom dia! \n Esse programa tem o intuito de calcular o seu IMC (Índice de Massa Corporal), por favor, indique seu nome: ");
    scanf("%s", nome);

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Para finalizarmos o cálculo, preciso que informe sua altura: ");
    scanf("%f", &altura);
    
   printf( " %s, seu IMC é: %.2f", nome, peso / (altura * altura));
 
    return 0;
  }
