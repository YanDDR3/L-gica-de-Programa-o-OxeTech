programa {
  funcao inicio() {
    inteiro ano_nasc
    inteiro ano_hoje
    inteiro idade  //CRTL + D -> Seleciona todas as palavras iguais. 

    escreva("Digite o ano de nascimento: ")
    leia (ano_nasc)
    escreva("Digite o ano atual: ")
    leia (ano_hoje)

    idade = ano_hoje - ano_nasc

    se (idade > 18){
      escreva("Hoje você tem : ", idade, " anos e pode dirigir!")
    }
      senao {
        se (idade < 18){
          escreva ("Hoje você tem : ", idade, " anos e Não pode dirigir!")
        }
    }
  }
  }
