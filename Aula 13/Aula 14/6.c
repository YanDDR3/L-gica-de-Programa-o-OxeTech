#include <stdio.h>
#include <string.h> // funções dessa biblioteca

int main (){
    char nome [20] = "Larissa"; 
    
    // função strlen(): Retorna o tamanho da string. 
    int tamanho = strlen(nome);
    printf("olá, %s!, O seu nome tem %d letras. \n", nome, tamanho);

    //função strcpy(): Copia uma string para a outra. 
    strcpy(nome, "Laryssa"); // se criar uma nova variável ele pode adicionar um novo nome.
    printf("Nome atualizado: %s\n",nome);

    // strcat(): Concatena uma string (Junta uma string a outra)
    char sobrenome[20] = " Manuela";
    char nomeCompleto[40] = ""; //adiciona o vazio para não ocorrer o lixo de memória na junção.

    strcat(nomeCompleto, nome); // apenas armazenou o nome de laryssa - sempre vai guardar o resultado na primeira variável
    strcat(nomeCompleto, sobrenome);
    printf("Nome completo: %s\n", nomeCompleto);

    //strcmp(): compara duas strings. 
    char nomeProcurado[] = "Laryssa";
    int retorno = strcmp(nome, nomeProcurado);

    if (retorno == 0) {
        printf("O usuario encontrado! \n");
    } else {
        printf("O usuario nao encontrado!\n");
    }
    return 0;
}