programa {
  funcao inicio() {
    cadeia nome
    real idade

    escreva("Digite seu nome: ")
    leia (nome)
    escreva("Digite sua idade: ")
    leia (idade)


  
    bemVindoAluno(nome, idade)
    
  }

  funcao bemVindoAluno(cadeia nome, real idade){
    escreva("olá, ", nome, " você tem ", idade, " anos. Seja Bem vindo(a)!" )
  }
}
