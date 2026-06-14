programa {
  funcao inicio() {

    real ph

    escreva("Digite o valor do pH: ")
    leia(ph)

    enquanto (ph != -1) {

      se (ph < 7){
        escreva("Substância Ácida\n")
      }
      senao se(ph > 7){
        escreva("Substância Básica\n")
      }
      senao {
        escreva("Substância Neutra\n")
      }

      escreva("Digite o próximo valor de pH: ")
      leia(ph)
    }
  }
}
