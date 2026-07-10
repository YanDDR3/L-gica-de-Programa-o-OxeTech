#include <stdio.h>
//fprintf(): escreve de maneira formatada. 

int main(){
    FILE *arquivo = fopen("dados.txt", "a");

    if (arquivo == NULL){ 
        printf("Erro ao abrir o arquivo. \n");
        return 1;
    }
    
    char nome[] = "Ana";
    int idade = 24;
    float altura = 1.97;

    fprintf(arquivo, "\n%s %d %.2f", nome, idade, altura); // não precisa do &comercial para escrita, apenas na leitura.
    
    fclose(arquivo);

    return 0;
}