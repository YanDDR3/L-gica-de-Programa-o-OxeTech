#include <stdio.h>
// aula sobre arquivos
//fopen() - serve para abrir um arquivo no pc 
    // - nome do arquivo
    // - modo de abertura


int main(){

    FILE *arquivo = fopen("dados.txt", "r"); 
//o * informa que ele vai guardar um endereço de memória, ou seja, onde o arquivo esta
// o primeiro " é o nome do arquivo" e o 2° "r" é a forma que o arquivo vai se comportar, se é leitura ou escrevar no arquivo. 
// r: leitura (precisa existir o arquivo)
// w: escrita (se não existir, o arquivo é criado)

if (arquivo == NULL){ //vai conferir se o arquivo foi encontrado
    printf("Erro ao abrir o arquivo. \n");
    return 1;
}

// leitura ou escrita

fclose(arquivo);

    return 0;
}