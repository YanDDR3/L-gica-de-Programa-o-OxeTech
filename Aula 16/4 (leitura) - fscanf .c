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
    
    char nome[20]; 
    int idade;
    float altura;

    while(fscanf(arquivo, "%s%d%f", nome, &idade, &altura) != EOF){
    printf("Nome: %s\n", nome);
    printf("idade: %d\n", idade);
    printf("Altura: %.2f\n\n", altura);
    }

    fclose(arquivo);

    return 0;
}