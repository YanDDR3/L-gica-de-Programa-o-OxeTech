programa {
  inclua biblioteca Util --> util
  funcao inicio() {
    
    cadeia melhorJogador = ""
    inteiro melhorPontuacao = 101


    enquanto(verdadeiro){
    
      escreva("------------------------\n")
      escreva("Bem-vindo ao jogo da advinhação\n")
      escreva("------------------------\n")

      inteiro numeroSorteado = util.sorteia(1, 100)
      inteiro numeroTentativas = 0
      cadeia nomeJogador

      escreva("Informe seu nome: ")
      leia (nomeJogador)

      escreva("Um número de 1 a 100 foi sorteado!\n")
      escreva("Tente advinhar qual é! Boa sorte! \n\n")

      enquanto(verdadeiro){
      inteiro numeroDigitado

      escreva("Qual o seu palpite ? ")
      leia(numeroDigitado)

      se (numeroDigitado < 1 ou numeroDigitado > 100){
        escreva("Dê um palpite entre 1 e 100. Tente novamente. \n\n")
      }
        senao {
          numeroTentativas++

      se(numeroDigitado == numeroSorteado){
        
        se(numeroTentativas <= 3){
          escreva("Extraordinário! Você é um gênio da advinhação! Numero de tentativas: ", numeroTentativas, ".\n")
        } senao se(numeroTentativas <=6 ){
          escreva("Muito bem! Você foi rápido! Número de tentativas: ", numeroTentativas, ".\n")
        } senao {
          escreva("Conseguiu! Persistência é tudo! Número de tentativas: ", numeroTentativas, "\n")
        }
        
        se (numeroTentativas < melhorPontuacao)
          melhorPontuacao = numeroTentativas
          melhorJogador = nomeJogador

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

        cadeia novojogo

        escreva("\n Deseja iniciar um novo jogo? (Sim ou Não) ? ")
        leia(novojogo)

        se(novojogo == "nao" ou novojogo == "NAO" ou novojogo == "n" ou novojogo == "N"){
      
        escreva("O melhor jogador foi ", melhorJogador, " com ", melhorPontuacao, " tentativas. \n")
        pare
      }
    } 
  }
}