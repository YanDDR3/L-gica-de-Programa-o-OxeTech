#include <stdio.h>

int main() {

    printf("Olá, bem vindo a calculadora de descontos!\nInforme o valor do item que você deseja adquirir: ");
    float precoitem;
    scanf("%f", &precoitem);

    float desconto10;
    desconto10 = precoitem * 0.1; 

    float preco_com_desconto;
    preco_com_desconto = precoitem - desconto10;

    float parcela3x;
    parcela3x = precoitem / 3;

    float comissao_avista;
    comissao_avista = preco_com_desconto* 0.05;

    float comissao_parcelada;
    comissao_parcelada = precoitem * 0.05;

    printf("\nO seu item com 10%% de desconto fica por: R$ %2.f", preco_com_desconto);
    printf("\nO valor de cada parcela (3x sem juros), fica por: R$ %.2f", parcela3x);
    printf("\nComissão do vendedor (à vista): R$ %.2f", comissao_avista);
    printf("\nComissão do vendedor (parcelado): R$ %.2f", comissao_parcelada);
   
    
    return 0;
}