programa {
  inclua biblioteca Util --> util
  funcao inicio() {

    // sortear um numero de 1 e 100
    // permitir que o jogador de palpites até acertar - enquanto
    // para cada palpite exibir uma dica - se/senão (maior ou menor do que o número sorteado)
    // exibir o número de palpites ao final - variável contador (numero de tentativas)

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
