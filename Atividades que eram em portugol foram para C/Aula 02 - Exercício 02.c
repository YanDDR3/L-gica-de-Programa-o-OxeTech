#include <stdio.h>

int main() {

   char nome[20];
   float n1, n2;
   //entrada de dados

   printf("Qual e o seu nome? ");
   scanf("%s", nome);

   printf("Qual foi a sua Primeira nota? ");
   scanf("%f", &n1);

   printf("Qual foi a sua Segunda nota? ");
   scanf("%f", &n2);
   
   //Saida de Dados
   printf("O aluno %s obteve media final:  %.2f ", nome, (n1 + n2) / 2); 
  return 0;
}