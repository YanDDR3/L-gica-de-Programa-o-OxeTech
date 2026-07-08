#include <stdio.h>
#include <string.h>

// esse aqui é para adicionar um array com as struct

struct aluno { // struct sempre é entre o main e o global. 
    char nome[40];
    int idade;
    float nota;
};

int main (){
    
    struct aluno estudantes[3]; 

    strcpy(estudantes[0].nome, "Lucas"); // para string tem de colocar como strcpy para atribuir um nome. 

    estudantes[0].idade = 17;
    estudantes[0].nota = 6.7;

    printf("Nome: %s\n", estudantes[0].nome);
    printf("Idade: %d\n", estudantes[0].idade);
    printf("Nota: %.2f\n", estudantes[0].nota);
    
    return 0; 
}