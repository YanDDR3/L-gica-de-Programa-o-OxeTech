programa {   
  
  
  funcao inicio() {
    
    real media
    escreva("Qual a média do aluno? ")
    leia(media)
    
    inteiro faltas
    escreva("Quantas faltas o aluno teve? ")
    leia (faltas)
    
    // criar função situação aluno
    classificaAluno (media, faltas)
    
  }
  funcao classificaAluno(real media, inteiro faltas){
    
    se(media >= 9.5 e faltas < 10){
      escreva("APROVADO COM LOUVOR!")
      } senao se(media >= 7 e media < 9.5 e faltas < 10){
      escreva("APROVADO!")
      } senao{
      escreva("REPROVADO")
    }
  }
}