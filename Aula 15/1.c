#include <stdio.h>
#include <string.h>
// Aula sobre Struckt
// é um tipo de dado personalizado que agrupa variáveis de diferentes tipos sob um único nome. 

struct aluno { // struct sempre é entre o main e o global. 
    char nome[40];
    int idade;
    float nota;
};

int main (){
    //Motivação: Armazenar as informações de um Aluno.  
    struct aluno estudante; //esse estudante aqui é o nome da variável, o "Aluno" é o nome da função lá em cima;
    printf("Digite o seu nome: ");
    scanf("%39[^\n]", estudante.nome);

    printf("Digite sua idade: ");
    scanf("%d", &estudante.idade);

    printf("Digite sua nota: ");
    scanf("%f", &estudante.nota);

    printf("Nome: %s\n", estudante.nome);
    printf("Idade: %d\n", estudante.idade);
    printf("Nota: %.2f\n", estudante.nota);
    return 0; 
}