programa {
  funcao inicio() {
    
    cadeia nome
    real peso
    real altura
    
    //Entrada de Dados
    
    escreva("Olá, bom dia!","\n", "Esse programa tem o intuito de calcular o seu IMC (Índice de Massa Corporal), por favor, indique seu nome: ")
    leia(nome)
    escreva("Muito bem ", nome, ", prosseguindo com seu cálculo, me informe seu Peso: ")
    leia(peso)
    escreva("Para finalizarmos o cálculo, preciso que informe sua altura: ")
    leia (altura)
    
    real altura2x
    altura2x = altura * altura  //sofri para descobrir isso aqui KKKKKKKKKK, mas deu certo fé. estava colocando "altura2x" antes de atribuir valor para a altura normal e estava dando erro no código.

    //Saída de Dados

    escreva(nome, ", seu Imc é: ", peso/altura2x) 
    
  }
}
