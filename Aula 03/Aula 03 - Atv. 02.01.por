programa {
  funcao inicio() {
    real nota
    escreva("Informe sua nota: ")
    leia (nota)

    se (nota >= 7 e nota <= 10){
      escreva("Aprovado")
    }
    senao se (nota >= 4 e nota <=6){
      escreva("você está em recuperação!")
    }
    senao se (nota >=0 e nota <= 3){
      escreva("Reprovado")
    }
    senao{          //caso não entre em nenhum dos casos acima (nota maior ou fora dos padrões estabelecidos), utiliza-se esse "senao".
      escreva("Nota inválida")
    }
  }
}
