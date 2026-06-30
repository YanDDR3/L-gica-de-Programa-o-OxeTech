#include <stdio.h>

int main(){

    int numeros[50] = {
    5, 8, 12, 3, 8, 15, 7, 8, 20, 1,
    9, 14, 8, 6, 11, 18, 2, 8, 13, 4,
    10, 8, 16, 19, 8, 5, 7, 8, 12, 3,
    17, 8, 14, 6, 8, 20, 9, 1, 8, 15,
    11, 8, 2, 13, 8, 4, 10, 8, 16, 19
    };
    
    int numero_escolhido;
    int encontrou = 0; 

    printf("Digite o numero que deseja procurar: ");
    scanf("%d", &numero_escolhido);

    printf("\n Encontrado nas posiçõoes: \n");

    for (int indice = 0; indice < 50; indice++){
        if(numeros[indice] == numero_escolhido){
            printf("%d\n", indice + 1);
            encontrou = 1;
        }
    }

    if (encontrou == 0){
        printf("Numero nao encontrado. \n");
    }

    return 0;
}