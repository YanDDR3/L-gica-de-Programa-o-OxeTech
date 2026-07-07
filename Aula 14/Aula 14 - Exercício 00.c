#include <stdio.h>
#include <string.h>



int main (){

    char nome [20];
    char segundo_nome [20];

    printf("Digite seu primeiro nome: ");
    scanf("%19s", nome);

    printf("Seu nome eh %s \n", nome);
    
    printf("Digite seu segundo nome: ");
    scanf("%19s", segundo_nome);

    printf("Seu segundo nome eh %s\n", segundo_nome);

    strcat(nome, " ");
    strcat(nome, segundo_nome);

    printf("Seu nome completo eh: %s \n", nome);
    int tamanho = strlen(nome);

    if (tamanho > 15){
        printf("Palavra Longa.\n");
    } else if (tamanho >= 8 && tamanho <= 15) {
        printf("Palavra media.\n");
    } else if (tamanho  >=5  && tamanho <=7) {
        printf("Palavra pequena.\n");
    } else { }


    return 0;
}