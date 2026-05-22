programa {
  funcao inicio() {
    // informações de um usuário (Nome, idade, altura, gênero(Caractere) e sua profissão)//

    cadeia nome 
    inteiro idade
    real altura
    caracter genero
    logico programador

    //Entrada de dados
    escreva("Informe seu nome: ", nome)
    leia(nome)
    escreva("Informe sua Idade: ")
    leia(idade)
    escreva("Informe sua altura: ")
    leia(altura)
    escreva("Informe seu gênero: ")
    leia(genero)
    escreva("as informações estão coerêntes? Verdadeiro ou Falso:")
    leia(programador)


    // Saída de dados
    escreva("Nome: ", nome, "\n")
    escreva("idade: ", idade, "\n")
    escreva("altura: ", altura, "\n")
    escreva("Sexo: ", genero, "\n")
    escreva("essa informação é verdadeira ou falsa? ", programador, "\n")

  }
}