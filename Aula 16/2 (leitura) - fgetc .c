#include <stdio.h>
//fgetc(): Lê caracter por caracter. - importante para saber a posição que o arquivo está 
//fgets(): lê linha por linha. 
//fscanf(): lê de maneira formatada. 

int main(){

    FILE *arquivo = fopen("dados.txt", "r"); 

    if (arquivo == NULL){ 
        printf("Erro ao abrir o arquivo. \n");
        return 1;
    }

    char ch;

    do {
        ch = fgetc(arquivo);  //esse laço serve para ler um por um  até o final
        printf("%c", ch);
    } while (ch != EOF); // constante - > END OF FILE
    
    fclose(arquivo);

    return 0;
}