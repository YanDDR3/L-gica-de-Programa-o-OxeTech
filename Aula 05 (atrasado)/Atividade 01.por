programa {
  funcao inicio() {

    real numero
    inteiro qtdPositivo = 0 // nao pode ser vazio aqui
    inteiro qtdNegativo = 0 // 

    escreva("Digite um número: ")
    leia(numero)

    enquanto (numero != 0) {

      se (numero > 0) {
        qtdPositivo++
      } senao {
        qtdNegativo++
      }

      escreva("Digite o próximo número: ")
      leia(numero)
    }

    escreva("\nQuantidade de números POSITIVOS digitados: ", qtdPositivo)
    escreva("\nQuantidade de números NEGATIVOS digitados: ", qtdNegativo)
  }
}