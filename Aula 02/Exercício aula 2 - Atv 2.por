programa {
  funcao inicio() {
   
   cadeia nome
   real n1, n2
   //entrada de dados

   escreva("Qual é o seu nome? ", nome)
   leia(nome)
   escreva("Qual foi a sua Primeira nota? ", n1)
   leia(n1)
   escreva("Qual foi a sua Segunda nota? ", n2)
   leia(n2)
   
   //Saída de Dados
   escreva("O aluno ",nome," obteve média final: ",(n1 + n2) / 2)
  }
}
