#include <stdio.h>
#include <string.h>

typedef struct aluno { 
    char nome[40];
    int idade;
    float nota;
} Aluno; // aqui a struct passou para esse nome. 

int main (){
    typedef float real; //typedef renomeia para qual nome você quer 
    typedef int inteiro;
    inteiro idade;
    real nota; 

    return 0; 
}