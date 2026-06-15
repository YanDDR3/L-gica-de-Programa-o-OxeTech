programa {
  inclua biblioteca Util -->util

  funcao inicio() {
    real escolha_inicial
   
    exibirMensagemInicial()

    escreva("Escolha sua opção: ")
    leia (escolha_inicial)

    enquanto(escolha_inicial < 1 ou escolha_inicial > 4)
    {
        escreva("Opção inválida!\n")
        escreva("Escolha uma opção entre 1 e 4: ")
        leia(escolha_inicial)
    }

    escolhaOperacao(escolha_inicial)
  
  }
  funcao exibirMensagemInicial (){
    escreva("Bem vindo a Calculadora 2.0 \n \n")
    escreva("Estamos iniciando o sistema, aguarde") // massa demais.
    util.aguarde(1000)
    escreva(".")
    util.aguarde(1000)
    escreva(".")
    util.aguarde(1000)
    escreva(".\n\n")
    util.aguarde(1000)
    
    escreva("----- CALCULADORA -----\n")
    escreva("Escolha sua operação:\n")
    escreva("1 - ADIÇÃO\n")
    escreva("2 - SUBTRAÇÃO\n")
    escreva("3 - DIVISÃO\n")
    escreva("4 - MULTIPLICAÇÃO\n")
    escreva("---------------------- \n")
  }
  funcao escolhaOperacao (real escolha_inicial){

    real n1
    real n2

    escolha (escolha_inicial){  
      caso 1: 
        escreva("\nvocê escolheu ADIÇÃO!\n")
        escreva("Digite o primeiro número: ")
        leia (n1)
        escreva("Digite o segundo número: ")
        leia (n2)
        escreva("\nA Soma dos dois números deu o resultado de: ", n1 + n2)
        pare

      caso 2: 
        escreva("Você escolheu SUBTRAÇÃO!\n")
        escreva("Digite o primeiro número: ")
        leia (n1)
        escreva("Digite o segundo número: ")
        leia (n2)
        escreva ("A SUBTRAÇÃO dos dois números deu o resultado de: ", n1 - n2)
        pare

      caso 3:
        escreva("Você escolheu DIVISÃO!\n") 
        escreva("Digite o primeiro número: ")
        leia (n1)
        escreva(n1, " Dividido por: ")
        leia (n2)
        escreva ("A DIVISÃO dos dois números deu o resultado de: ", n1 / n2)
        pare

      caso 4:
        escreva ("Você escolheu MULTIPLICAÇÃO!\n")
        escreva ("Digite o primeiro número: ")
        leia (n1)
        escreva (n1, " Multiplicado por: ")
        leia (n2)
        escreva ("a MULTIPLICAÇÃO de ", n1, " x ", n2, " é igual: ", n1 * n2)
        pare

      caso contrario:
        escreva("Opção inválida!")
    }
  }
}