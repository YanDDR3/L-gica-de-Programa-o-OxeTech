#include <stdio.h>
#include <string.h>

int main (){

    char primeira_frase [40];
    char segunda_frase [40];

    printf("Digite sua primeira frase: ");
    fgets(primeira_frase, 40, stdin);
    
    printf("Digite sua segunda frase: ");
    fgets(segunda_frase, 40, stdin);
    
    primeira_frase[strcspn(primeira_frase, "\n")] = '\0'; //duvida sobre esse, não consegui entender, procure mais
    
    strcat(primeira_frase, " ");
    strcat(primeira_frase, segunda_frase);
    
    printf("Sua frase completa eh:  %s", primeira_frase);

    return 0;
}