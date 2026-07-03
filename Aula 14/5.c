#include <stdio.h>
#include <string.h> // tem de incluir essa biblioteca

int main (){
    //Leitura de Strings
    char nome [20]; 

    // com fgets()
    printf("Qual o seu nome ?");
    fgets(nome, 20, stdin); //esse stdin é o entrada padrão, ou seja, o teclado. 
    int indice = strcspn(nome, "\n"); 
    nome[indice] = '\0';

    printf("Indice: %d\n", indice);
    printf("nome:%s\n", nome);
    printf("Fim do programa."); 
   
    return 0;
}