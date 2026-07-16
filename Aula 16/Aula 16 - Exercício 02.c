#include <stdio.h>
#include <string.h>

int main (){

    FILE *arquivo = fopen("notas.txt", "r");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo. \n");
        return 1;
    }

    char linha[20];

    while(fgets(linha, 20, arquivo) != NULL){
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}