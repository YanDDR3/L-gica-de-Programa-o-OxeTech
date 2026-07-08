#include <stdio.h>
#include <string.h>

struct aluno { //struct com as informações que quero
    char nome[40];
    int idade;
    float nota;
};

int main (){
    
    struct aluno estudantes[3]; // essa quantidade vc pode alterar

    for (int i = 0; i < 3; i++) { //laço de repetição -> o i é o indice do laço 
        printf("Digite o seu nome: ");
        scanf("%39[^\n]", estudantes[i].nome);

        printf("Digite sua idade: ");
        scanf("%d", &estudantes[i].idade);

        printf("Digite sua nota: ");
        scanf("%f", &estudantes[i].nota);

        getchar(); //função para limpar o buffer
    }

    strcpy(estudantes[0].nome, "Lucas"); // para string tem de colocar como strcpy para atribuir um nome. 
    estudantes[0].idade = 17;
    estudantes[0].nota = 6.7;

    for (int i = 0; i < 3; i++){
        printf("Dados do %d° estudante: \n", i + 1);
        printf("Nome: %s\n", estudantes[i].nome);
        printf("Idade: %d\n", estudantes[i].idade);
        printf("Nota: %.2f\n", estudantes[i].nota); 
    }
   
    return 0; 
}