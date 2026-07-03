#include <stdio.h>

int main (){
    //Leitura de Strings
    char nome [20]; 

    //com scanf()
    printf("Qual o seu nome ?");
    scanf("%19[^\n]", nome); // esse código - [^\n] - serve para colocar representar a pula de linha em um nome, exemplo Yan Carlos.
                            // o %19 serve para delimitar até o buffer.

    printf("nome: %s \n", nome);
   
    return 0;
}