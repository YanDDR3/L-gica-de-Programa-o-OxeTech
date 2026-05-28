programa {
  funcao inicio() {
    
    real escolha_inicial
    real n1
    real n2

    escreva("----- CALCULADORA -----\n")
    escreva("Escolha sua operação:\n")
    escreva("1 - ADIÇÃO\n")
    escreva("2 - SUBTRAÇÃO\n")
    escreva("3 - DIVISÃO\n")
    escreva("4 - MULTIPLICAÇÃO\n")
    escreva("---------------------- \n")
    escreva("Escolha sua opção: ")
    leia (escolha_inicial)


    escolha (escolha_inicial){  //professor, eu escolhir ir pelo jeito mais trabalhoso e repetitivo, para me forçar a acostumar com o código CASO escrevendo ele várias vezes. 
      caso 1: 
        escreva("\nvocê escolheu ADIÇÃO!\n")
        escreva("Digite o primeiro número: ")
        leia (n1)
        escreva("Digite o segundo número: ")
        leia (n2)
        escreva("A Soma dos dois números deu o resultado de: ", n1 + n2)
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
        escreva("Escolha inválida") //perguntar ao professor como fazer para voltar a primeira escolha (entre soma,subtração,divisão e multiplicação) caso o usuário faça uma escolha errada. 
    }
  }
}
