programa {
  funcao inicio() {
    
    inteiro numerosDigitados
    real numero
    real menorNumero
    real maiorNumero

  
    escreva("Quantos numeros voce vai digitar? ")
    leia(numerosDigitados)

    para (inteiro contador = 1; contador <= numerosDigitados; contador++ ){
      escreva("Digite o ", contador, "º número: ")
      leia(numero)

      se (contador == 1) {
        maiorNumero = numero
        menorNumero = numero
      }

      se (numero > maiorNumero) {
        maiorNumero = numero
      }
      se (numero < menorNumero) {
        menorNumero = numero
      }
    }

    escreva("O Menor número digiado foi: ", menorNumero, "\n")
    escreva("o Maior numero digitado foi: ", maiorNumero, "\n")
  }
}
