#include <stdio.h>
#include <string.h>
#define MAX_CONTAS 50

int ids = 1001;
int totalContas = 0;

typedef struct {
  int numero;
  char nome[50];
  float saldo;
} Conta;

void criarConta(Conta contas[]);
void exibirContas(Conta contas[]);
void depositar(Conta contas[]);
void sacar(Conta contas[]);
void buscarConta(Conta contas[]);
void transferir(Conta contas []);

int main() {
  Conta contas[MAX_CONTAS];

  int opcao;

  do {
    printf("\n===== SISTEMA BANCÁRIO =====\n");
    printf("1 - Criar Conta\n");
    printf("2 - Exibir Contas\n");
    printf("3 - Depositar\n");
    printf("4 - Sacar\n");
    printf("5 - Buscar Conta\n");
    printf("6 - Transferir\n");
    printf("7 - Deletar Conta\n");
    printf("8 - Editar Conta\n");
    printf("0 - Sair\n");
    printf("============================\n\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    getchar();

    switch (opcao) {
    case 0:
      // Sair do prorama
      break;
    case 1:
      criarConta(contas);
      break;
    case 2:
      exibirContas(contas);
      break;
    case 3:
      depositar(contas);
      break;
    case 4:
      sacar(contas);
      break;
    case 5:
      buscarConta(contas);
      break;
    case 6:
      transferir(contas);
      break;
    case 7:
      // Deletar Conta
      break;
    case 8:
      // Editar Conta
      break;
    default:
      printf("Opcao invalida. Tente novamente.");
    }

  } while (opcao != 0);

  return 0;
}

int obterIndiceConta(Conta contas[], int numero){
    for (int i = 0; i < totalContas; i++){
        if(contas[i].numero == numero){
            return i;
        } 
    }

    return -1;
}

void criarConta(Conta contas[]) {

  if(totalContas >= MAX_CONTAS){
    printf("O sistema atingiu o limite de contas! ");
    return;
  }
  printf("\n --- CADASTRO --- \n");

  Conta conta;

  printf("Digite seu nome: ");
  scanf("%49[^\n]", conta.nome);
  
  conta.numero = ids;
  conta.saldo = 0.0;

  int indice = totalContas;

  contas[indice] = conta;

  printf("A conta foi criado com sucesso!\n");

  printf("Numero: %d\n", contas[indice].numero);
  printf("Nome: %s\n", contas[indice].nome);
  printf("Saldo: R$ %.2f\n", contas[indice].saldo);

  ids++;
  totalContas++;
}

void exibirContas(Conta contas[]){

    if (totalContas == 0){
        printf("Nenhuma conta cadastrada. \n ");
        return;
    }
    for (int i = 0; i < totalContas; i++){
        printf("Numero: %d\n", contas[i].numero);
        printf("Nome: %s\n", contas[i].nome);
        printf("Saldo: R$ %.2f\n\n", contas[i].saldo);
    }
}

void depositar(Conta contas[]){
    int numero;

    printf("\n Digite o número da conta: ");
    scanf("%d", &numero);

    int indice = obterIndiceConta(contas, numero);

    if (indice == -1){
        printf("Conta nao encontrada. \n");
        return;
    }

    float valorDeposito;

    printf("\n Informe o valor do deposito");
    scanf("%f", &valorDeposito);

    contas[indice].saldo += valorDeposito;
}

void sacar(Conta contas[]){
    int numero;

    printf("\n Digite o número da conta: ");
    scanf("%d", &numero);

    int indice = obterIndiceConta(contas, numero);

    if (indice == -1){
        printf("Conta nao encontrada. \n");
        return;
    }

    float valorSaque;

    printf("\nInforme o valor do saque: ");
    scanf("%f", &valorSaque);

    if (valorSaque > contas[indice].saldo){
        printf("Saldo em conta insuficiente. \n ");
    } else {
        contas[indice].saldo -= valorSaque;
    }
}

void buscarConta(Conta contas[]){
    int numero;

    printf("\n Digite o número da conta: ");
    scanf("%d", &numero);

    int indice = obterIndiceConta(contas, numero);

    if (indice == -1){
        printf("Conta nao encontrada. \n");
        return;
    }

    printf("Numero: %d\n", contas[indice].numero);
    printf("Nome: %s\n", contas[indice].nome);
    printf("Saldo: R$ %.2f\n", contas[indice].saldo);

}

void transferir(Conta contas []){
    int numeroOrigem;

    printf("\n Informe o numero da conta de origem: ");
    scanf("%d", &numeroOrigem);

    int numeroDestino;

    printf("\n Informe o numero da conta de destino: ");
    scanf("%d", &numeroDestino);

    int indiceOrigem = obterIndiceConta(contas, numeroOrigem);
    int indiceDestino = obterIndiceConta(contas, numeroDestino);

    if(indiceOrigem == -1 || indiceDestino == -1){
        printf("Conta(s) nao encontradas(s). \n ");
        return; 
    }

    float valorTransferencia;

    printf("\nInforme o valor da transferencia: ");
    scanf("%f", &valorTransferencia);

    if(valorTransferencia > contas[indiceOrigem].saldo) {
        printf("Saldo em conta insuficiente. \n ");
    } else {
        contas[indiceOrigem].saldo -= valorTransferencia;
        contas[indiceDestino].saldo += valorTransferencia;
    }
}

