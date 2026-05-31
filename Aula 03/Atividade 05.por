programa {
  funcao inicio() {
    cadeia nome
    inteiro idade

    escreva("Olá, Qual seu nome? ")
    leia (nome)
    escreva(nome, ", Qual sua idade? ")
    leia (idade)

    se (idade >= 16 e idade < 18 ou idade > 65) {
      escreva(nome, ", Sua classificação eleitoral é: Eleitor Facultativo.")
    } 
      senao se(idade >= 18 e idade <= 65) {
        escreva(nome, ", Sua classificação eleitoral é: Eleitor Obrigatório.")
    } senao se(idade < 16){
        escreva(nome, ", Sua classificaçao eleitoral é: Não Eleitor.")
    }
  }
}