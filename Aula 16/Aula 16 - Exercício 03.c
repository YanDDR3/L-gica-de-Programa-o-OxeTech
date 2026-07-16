#include <stdio.h>
#include <string.h>

int main(){

    FILE *file = fopen("usuarios.txt", "w");

    if (file == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int quantidade;

    printf("Quantos usuários deseja cadastrar? ");
    scanf("%d", &quantidade);
    getchar();

    char nome[50];
    int idade;
    char email[99];

    for (int i = 0; i < quantidade; i++){

        printf("\nCadastro %d\n", i + 1);

        printf("Digite seu nome: ");
        fgets(nome, 50, stdin);

        nome[strcspn(nome, "\n")] = '\0';

        printf("Digite sua idade: ");
        scanf("%d", &idade);
        getchar();

        printf("Digite seu email: ");
        scanf("%s", email);
        getchar();

        fprintf(file, "%s %d %s\n", nome, idade, email);
    }

    fclose(file);

    file = fopen("usuarios.txt", "r");

    if (file == NULL){
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    char nomeLido[50];
    int idadeLida;
    char emailLido[99];

    printf("\n--- Usuários cadastrados ---\n");

    while (fscanf(file, "%s %d %s", nomeLido, &idadeLida, emailLido) == 3){

        printf("\nNome: %s\n", nomeLido);
        printf("Idade: %d\n", idadeLida);
        printf("Email: %s\n", emailLido);
    }

    fclose(file);

    return 0;
}