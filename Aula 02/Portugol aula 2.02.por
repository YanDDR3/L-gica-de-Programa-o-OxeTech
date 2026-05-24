programa {
  funcao inicio() {
    
    cadeia nome
    inteiro idade
    real altura
    caracter genero
    logico estudante

    //entrada de dados
    escreva("Qual é o seu nome? ", nome)
    leia(nome)
    escreva("Qual é a sua idade? ", idade)
    leia(idade)
    escreva("Qual a sua altura?", altura)
    leia(altura)
    escreva("Qual o seu gênero?", genero)
    leia(genero)
    escreva("É estudante? ", estudante)
  
    //saída de dados 
    escreva("Seu nome é: ", nome, "\n")
    escreva("Então sua idade: ", idade, "\n")
    escreva("Sua altura é: ", altura, "\n")
    escreva("Seu genero é: ", genero, "\n")
    escreva("Estudante: ", estudante, "\n")
  }
}
