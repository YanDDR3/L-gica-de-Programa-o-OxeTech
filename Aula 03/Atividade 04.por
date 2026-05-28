programa {
  funcao inicio() {
    
    real peso 
    real altura
    
    escreva("Peso (Kg): ") leia (peso)
    escreva("Altura (Metros) ") leia (altura)
    real imc = peso / (altura * altura) escreva("seu IMC é: ", imc )

    se (imc >= 40 ){
      escreva("\nVocê tem Obesidade grau 3!")
    }
    senao se (imc >= 35  e imc <= 39.9){
      escreva("\nVocê tem Obesidade grau 2!")
    }
    senao se (imc >= 30 e imc <= 34.9){
      escreva("\nVocê tem Obesidade grau 1!")
    }
    senao se (imc >= 25 e imc <= 29.9){
      escreva("\nVocê tem Sobrepeso!")
    }
    senao se (imc >= 18.5 e imc <= 24.9){
      escreva("\nVocê tem Peso normal!")
    }
    senao se (imc < 18){
      escreva ("\nVocê está abaixo do peso!")
    }
  }
}
