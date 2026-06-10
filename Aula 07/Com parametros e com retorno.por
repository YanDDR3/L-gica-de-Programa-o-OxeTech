programa {
  //Tipos de função
  // Com parâmetros e com retorno
  inclua biblioteca Util --> util
  funcao inicio() {
    inteiro numeroSorteado = sortearNumero(1, 1000) // aqui você pode adicionar as dificuldades
    escreva(numeroSorteado)
    
  }

  funcao inteiro sortearNumero(inteiro inicio, inteiro fim) {
    inteiro numero = util.sorteia(inicio, fim)
    retorne numero
  }
}