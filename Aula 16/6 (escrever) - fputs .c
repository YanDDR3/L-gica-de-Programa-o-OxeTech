#include <stdio.h>
//fputc(): escreve caracter por caractere
//fputs(): escreve linha por linha. 
//fprintf(): escreve de maneira formatada. 

// o w escreve o arquivo novamente, o a vai adicionar no final do arquivo. 
int main(){
    FILE *arquivo = fopen("dados.txt", "a"); // mudou aqui o W

    if (arquivo == NULL){ 
        printf("Erro ao abrir o arquivo. \n");
        return 1;
    }
    
    char nome[] = "Ana";

    fputs(nome, arquivo);
    
    fclose(arquivo);

    return 0;
}