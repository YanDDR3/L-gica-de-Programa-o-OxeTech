#include <stdio.h>

int main(){
    
    float angulo1;
    float angulo2;
    double triangulo = 180;

    printf("Digite o primeiro ângulo: ");
    scanf("%f", &angulo1);

    printf("Digite o segundo ângulo: ");
    scanf("%f", &angulo2);

    float angulo3 = triangulo - (angulo1 + angulo2);
   
    printf("O terceiro ângulo do triângulo é: %f", triangulo - angulo3);

    return 0;
}