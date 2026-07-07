#include <stdio.h>
#include <string.h>

int main (){

    char nome [99];

    printf("Digite seu nome: ");
    scanf("%98s", nome);

    int tamanho = strlen(nome);
    printf("Ola %s! \nSeu nome tem %d letras. \n", nome, tamanho);

    if (tamanho > 15){
        printf("nome grande.\n");
    } else if (tamanho >= 8 && tamanho <= 15) {
        printf("nome media.\n");
    } else if (tamanho  >=5  && tamanho <=7) {
        printf("nome pequeno.\n");
    } else { 
        printf("Nome minusculo!\n");
    }

    return 0;
}
