programa {
  funcao inicio() {
    
    inteiro clientes
    escreva("Quantos clientes foram atendidos hoje? ")
    leia(clientes)

    real soma = 0 //sem o 0 não funciona

    para (inteiro contador =1; contador <= clientes; contador++){
      real venda
      escreva("Qual o valor arrecadado pelo ", contador, "º cliente? ") 
      leia (venda)

      soma = soma + venda
    }

    escreva("O total arrecadado pela loja foi: ", soma)

  }
}
