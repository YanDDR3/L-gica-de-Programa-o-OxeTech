#include <stdio.h>
#include <string.h>

int main (){

    FILE *arquivo = fopen("entrada.txt", "r");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo. \n");
        return 1;
    }
    int caractere;
    int contador = 0;

    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere);
        contador++;
    }

    printf("\nTotal de caracteres: %d\n", contador);

    fclose(arquivo);

    return 0;
}