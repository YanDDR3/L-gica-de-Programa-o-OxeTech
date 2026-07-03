#include <stdio.h>

int main (){

    char nome [4];  //em uma string não precisa do C&A

    printf("Qual o seu nome ?");
    scanf("%s", nome);


    printf("nome: %s \n", nome);
   
    return 0;
}