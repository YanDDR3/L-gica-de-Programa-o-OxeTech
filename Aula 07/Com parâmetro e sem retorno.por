programa {
  //tipos de função 
  // - Com parâmetro e sem retorno
  funcao inicio() {
    exibirMensagemPersonalizada(3)
  }

  funcao exibirMensagemPersonalizada(inteiro tentativas){
    se(tentativas <= 3){
        escreva("Extraordinário! Você é um gênio da advinhação! Numero de tentativas: ", tentativas, ".\n")
      } senao se(tentativas <=6 ){
        escreva("Muito bem! Você foi rápido! Número de tentativas: ", tentativas, ".\n")
      } senao {
        escreva("Conseguiu! Persistência é tudo! Número de tentativas: ", tentativas, "\n")
      }
  }
}
