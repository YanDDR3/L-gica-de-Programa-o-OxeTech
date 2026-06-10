programa {
  funcao inicio() {
    cadeia classificao = classificaAluno(7.6)

    escreva(classificao)
  }

  funcao cadeia classificaAluno(real media) {
     se(media >= 6 ){
      retorne "Aprovado!"
    } senao {
      retorne "Reprovado!"
    }
  }
}
