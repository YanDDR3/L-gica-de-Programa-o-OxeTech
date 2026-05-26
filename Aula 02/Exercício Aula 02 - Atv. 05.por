programa {
  funcao inicio() {

    //entrada de dados

    escreva("Olá, bem vindo a calculadora de descontos!\nInforme o valor do item que você deseja adquirir: ")
     real precoitem
     leia (precoitem)
     
     real desconto10 
     desconto10 = precoitem * 0.1
     real asas
     asas = precoitem - desconto10
     real parcela3x
     parcela3x = precoitem / 3
     real comissao_avista
     comissao_avista = asas * 0.05 
     real comissao_parcelada
     comissao_parcelada = precoitem * 0.05

     //saída de dados
     escreva("O seu item com 10% de desconto fica por: R$", asas) 
     escreva("\nO valor de cada parcela (3x sem juros), fica por: R$", parcela3x)
     escreva("\nComissão do vendedor (à vista): R$ ", comissao_avista)
     escreva("\nComissão do vendedor (parcelado): R$ ", comissao_parcelada)
     //escreva ("Pagamento à vista? \nResponda com Sim ou Não: ")
     //logico avista 
     //leia (avista) //não consegui usar o a variável "se" aqui
    
  }
}
