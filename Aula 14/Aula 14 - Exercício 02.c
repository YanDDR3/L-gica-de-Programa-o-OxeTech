#include <stdio.h>
#include <string.h> 

int main(){
    char primeira_palavra [20];
    char segunda_palavra [20];
    
    printf("Escreva a primeira palavra: ");
    scanf("%19s", primeira_palavra);
    
    printf("Escreva a segunda palavra: ");
    scanf("%19s", segunda_palavra);
    
    int comparacao = strcmp(primeira_palavra, segunda_palavra);
   
    if (comparacao == 0) {
        printf("As palavras são iguais \n");
    } else {
        printf("As palavras não são iguais \n");
    }
    
    return 0;
}