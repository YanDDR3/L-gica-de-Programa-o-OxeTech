programa {
  funcao inicio() {
    inteiro idade

    escreva("Escreva sua idade: ")
    leia(idade)
    se (idade >= 65){
      escreva("Você é um idoso!")
    }
    senao se(idade >= 18 e idade <= 64){
      escreva("Você é um adulto!")
    }
    senao se (idade >= 13 e idade <= 17){
      escreva("Você é adolescente!")
    }
    senao se (idade >= 0 e idade <= 12){
      escreva("Você é uma criança")
    }
  }
}
