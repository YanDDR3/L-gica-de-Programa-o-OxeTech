programa {
  funcao inicio() {
    real media

    escreva("informe a média: ")
    leia(media)

    classificaAluno(media)
    
    escreva("informe a média: ")
    leia(media)

    classificaAluno(media)
  }

  funcao classificaAluno(real media) {
     se(media >= 6 ){
      escreva("Aprovado!\n")
    } senao {
      escreva("Reprovado!\n")
    }
  }
}
