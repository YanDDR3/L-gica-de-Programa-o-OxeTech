programa {
  funcao inicio() {
    
    inteiro pessoas
    inteiro idade
    cadeia nome

    escreva("Informe quantas pessoas irão utilizar o sistema: ")
    leia (pessoas)

    para (inteiro contador = 1; contador <= pessoas; contador++){
      escreva("Qual o nome da ", contador, "º pessoa? ") leia (nome)
      escreva("Qual a idade de ", nome, "? ") leia (idade)
    
      se (idade >= 18){
        escreva (nome, ", Você pode tirar CNH!\n")
        } senao{
        escreva(nome, ", Você NÃO pode tirar CNH!\n")
      }
    }
  }
}