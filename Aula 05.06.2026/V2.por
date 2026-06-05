programa {
  inclua biblioteca Util --> util
  funcao inicio() {
    
    escreva("------------------------\n")
    escreva("Bem-vindo ao jogo da advinhação\n")
    escreva("------------------------\n")

    inteiro numeroSorteado = util.sorteia(1, 100)
    inteiro numeroTentativas = 0

    escreva("Um número de 1 a 100 foi sorteado!\n")
    escreva("Tente advinhar qual é! Boa sorte! \n\n")

    enquanto (verdadeiro ){
      inteiro numeroDigitado

      escreva("Qual o seu palpite ? ")
      leia(numeroDigitado)

      numeroTentativas++

      se(numeroDigitado == numeroSorteado){
        
        se(numeroTentativas <= 3){
          escreva("Extraordinário! Você é um gênio da advinhação! Numero de tentativas: ", numeroTentativas, ".\n")
        } senao se(numeroTentativas <=6 ){
          escreva("Muito bem! Você foi rápido! Número de tentativas: ", numeroTentativas, ".\n")
        } senao {
          escreva("Conseguiu! Persistência é tudo! Número de tentativas: ", numeroTentativas, "\n")
        }
          escreva("Parabéns! Você acertou em :", numeroTentativas, " tentativas.\n ")
        pare
      } 

      se(numeroSorteado > numeroDigitado){
        escreva("O número sorteado é MAIOR QUE ", numeroDigitado, ". \n\n")
      } senao {
        escreva("O número sorteado é MENOR QUE ", numeroDigitado, ". \n\n")
      }

    }
  }
}