#include <stdio.h>

int main(){ 
    //ordenação melhor caso
    int numeros[] = {5, 2, 1, 4, 3}; 

    // Original: [[5][2][1][4][3]]
    // indice = 0: [[5][2][1][4][3]]
    // indice = 1: [[2][5][1][4][3]]
    // indice = 2: [[2][1][5][4][3]]
    // indice = 3: [[2][1][4][5][3]]
    // indice = 4: [[2][1][4][3][5]]

    int tam = 5;

    //original: 5 2 1 4 3

    for (int indice = 0; indice < tam - 1; indice++){ //
        if(numeros[indice] > numeros[indice + 1]){
            int auxiliar = numeros[indice]; // 5
            numeros[indice] = numeros[indice + 1];
            numeros[indice + 1] = auxiliar;
        }
    } 

    // array no após primeira execução : 2 1 4 3 5

     for (int indice = 0; indice < tam - 1; indice++){ //
        if(numeros[indice] > numeros[indice + 1]){
            int auxiliar = numeros[indice]; // 5
            numeros[indice] = numeros[indice + 1];
            numeros[indice + 1] = auxiliar;
        }
    } 

    // apos a segunda execução 1 2 3 4 5

    for (int indice = 0; indice < tam; indice++){
        printf("%d ", numeros[indice]);
    }

    return 0;
}