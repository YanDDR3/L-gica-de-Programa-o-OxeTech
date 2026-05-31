programa {
  funcao inicio() {
    
    real temperatura
    caracter secrecao_tosse_dor

    escreva("Infome sua temperatura: ")
    leia(temperatura)
    escreva("Você está com secreção, tosse e dor no corpo?\nResponda apenas com S ou N: " )
    leia (secrecao_tosse_dor)

    se (temperatura >= 37 e secrecao_tosse_dor == 'S') {
      escreva("Você precisa de Exames Especiais.")
    } 
      senao se (temperatura >= 37 e secrecao_tosse_dor == 'N') {
        escreva("Você precisa de Exames básicos")
    } senao se (temperatura < 37 e secrecao_tosse_dor == 'S'){
        escreva("Você precisa de Exames básicos")
    } senao se (temperatura < 37 e secrecao_tosse_dor == 'N'){
        escreva("Você está liberado")
    } senao se (temperatura >= 0 e secrecao_tosse_dor != 'S' ou 'N'){
        escreva("Você Não informou corretamente os dados!")
    }
  }
}
