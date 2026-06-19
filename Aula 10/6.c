// para -> for
// enquanto -> while
// faca-enquanto -> do-while
#include <stdio.h>

int main() {
    
    for(int contador = 0; contador < 5; contador++){
        printf("%d: Hello World. \n", contador);
    }

    int contwhile = 0;

    while(contwhile < 5){
        printf("%d: Hello World. \n", contwhile);
        contwhile++;
    }

    int contDoWhile = 0;

    do {
        printf("%d: Hello World. \n", contDoWhile);
        contDoWhile++;
    } while (contDoWhile < 5);
    
    return 0;
}