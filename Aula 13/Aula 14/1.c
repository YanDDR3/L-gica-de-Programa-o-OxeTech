#include <stdio.h>

int main (){

    char nome [4]; //sempre um caractere a mais para um caractere especial(esse caractere finaliza a string)

    nome[0] = 'A';
    nome[1] = 'n';
    nome[2] = 'a';


    char genero[9] = "Feminino";
    char estadoCivil[] = "Solteira";

    printf("nome: %s \n", nome);
    printf("Genero: %s\n", genero);
    printf("Estado Civil: %s\n", estadoCivil);
    
    return 0;
}