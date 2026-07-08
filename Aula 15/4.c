#include <stdio.h>
#include <string.h>

struct aluno { 
    char nome[40];
    int idade;
    float nota;
};

void mostrarDados(struct aluno estudante);

int main (){
    struct aluno estudante = {"Lucas", 18, 8.9};  // inicializar o

    mostrarDados(estudante); // chama a função aqui 

    return 0; 
}

void mostrarDados(struct aluno estudante){
    printf("Dados do %d° estudante: \n");
    printf("Nome: %s\n", estudante.nome);
    printf("Idade: %d\n", estudante.idade);
    printf("Nota: %.2f\n", estudante.nota); 
}