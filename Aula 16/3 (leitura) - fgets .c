#include <stdio.h>
//fgetc(): 
//fgets(): lê linha por linha. 
//fscanf(): lê de maneira formatada. 

int main(){

    FILE *arquivo = fopen("dados.txt", "r"); 

    if (arquivo == NULL){ 
        printf("Erro ao abrir o arquivo. \n");
        return 1;
    }

    //char linha[20];
    //fgets(linha, 20, arquivo);
    //printf("Linha 1: %s", linha); se for fazer 1 por 1
    
    char linha[20]; // com um laço de repetição.

    while(fgets(linha, 20, arquivo) != NULL){
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}