#include <stdio.h>
#include <string.h>

struct palavras {
    char qualnome[20];
};
int main (){

    struct palavras frase[3];
    
    printf("Escreva a primeira palavra: ");
    scanf("%19s", frase[0].qualnome);
    
    printf("Escreva a segunda palavra: ");
    scanf("%19s", frase[1].qualnome);
    
    printf("Escreva a terceira palavra: ");
    scanf("%19s", frase[2].qualnome);
    
    printf("\nAs palavras digitadas na ordem inversa ficarão assim: ");
    printf("\n%s", frase[2].qualnome);
    printf("\n%s", frase[1].qualnome);
    printf("\n%s", frase[0].qualnome); //sei que eu poderia ter otimizado aqui utilizando um laço de repetição, mas optei por essa forma
    
  
    return 0;
}