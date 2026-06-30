#include <stdio.h>

int main() {

    int numeros[10] = {15, 7, 22, 3, 10, 9, 25, 1, 13, 18};

    int menor_numero = numeros[0];
    int maior_numero = numeros[0];

    for (int indice = 1; indice < 10; indice++) {
        if (numeros[indice] < menor_numero) {
            menor_numero = numeros[indice];
        }

        if (numeros[indice] > maior_numero) {
            maior_numero = numeros[indice];
     }
    }

    printf("O menor valor é: %d\n", menor_numero);
    printf("O maior valor é: %d\n", maior_numero);

    return 0;
}