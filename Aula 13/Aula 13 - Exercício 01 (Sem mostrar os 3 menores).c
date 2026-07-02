#include <stdio.h>

void bubbleSort(float array[], int tam);
void mostrarOrdem( float array[], int tam);

int main(){

    float numeros[20] = {7.5, 9.0, 4.5, 8.0, 6.5, 10.0, 3.0, 5.5, 7.0, 2.5, 8.5, 6.0, 9.5, 1.0, 4.0, 7.8, 5.0, 3.5, 2.0, 6.8};
    bubbleSort(numeros, 20);
    mostrarOrdem(numeros, 20); 

    return 0;
}

void bubbleSort (float array[], int tam){
    for(int i = 0; i < tam - 1; i++){
        for(int j = 0; j < tam - i - 1; j++){
            if(array[j] > array[j + 1]){
                float aux = array[j];  // apanhei aqui para descobrir que o aux deviria ser float, deu
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }
}

void mostrarOrdem( float array[], int tam){
    for (int i = 0; i < tam; i++){
        printf("%.1f, ", array[i]); /* aqui ó, o %f por padrão imprime 6 numeros depois da virgula, então tem de colocar um limitador
        então tem de colocar o %.1f para exibir apenas 1 nº depois da virgula*/ 
    }
}