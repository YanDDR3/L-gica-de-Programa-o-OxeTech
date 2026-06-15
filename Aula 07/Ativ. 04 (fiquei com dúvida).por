programa {
  funcao inicio() {

    inteiro ano
    escreva("Digite o ano: ")
    leia(ano)

    logico ehbissexto(ano) // perguntar ao professor como fazer essa chamada da função aqui. 
    
  }
   // criar função Bissexto 
  funcao logico ehbissexto(inteiro ano){
    se (ano % 4 == 0 e ano % 100 != 0){ //tive de buscar ajuda dos universitários para fazer esse 
    escreva("Ano BISSEXTO!")
    } senao {
    escreva("Ano NÃO BISSEXTO!")
    }
    retorne (ano % 4 == 0 e ano % 100 != 0)
  }
}
