programa {

  funcao inicio() {

    real base
    real altura

    escreva("Digite a base do retângulo: \n")
    leia(base)
    escreva("Digite a Altura do retângulo: \n")
    leia(altura)

    real area = calcularAreaRetangulo(base, altura)

    escreva("Área do retângulo é: ", area)
  } 

  funcao real calcularAreaRetangulo (real base, real altura){
    retorne base * altura

  }
  
}