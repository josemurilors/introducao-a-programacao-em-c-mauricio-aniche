#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 3 

int main() {
  printf("************************************\n"); 
  printf("* Bem-vindo ao jogo de adivinhação *\n");
  printf("************************************\n");

  int numerosecreto, chute, acertou, ganhou, tentativas;
  numerosecreto = 42;
  ganhou = 0;
  tentativas = 1;
  
  for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
  
    printf("Qual é seu %do chute\n?", i);
  scanf("%d", &chute);
  printf("Você %do chutou o número %d!\n", i, chute);

  if (chute < 0) {
    printf("Você não pode chutar números negativos");
    i--;
    continue;
  }
  
  acertou = chute == numerosecreto;
  int maior = chute > numerosecreto;
  
  if (acertou) {
    printf("Parabéns tu acertastes\n");
    printf("A sorte anda sempre ao seu lado jogador\n");
    break;
  }
  else if(maior) {
    printf("O número chutado foi maior que o que a máquina escolheu\n");
  }
    else {
      printf("O número chutado foi menor que o que a máquina escolheu\n");
      printf("Tente novamente, desistir não o levará a lugar nenhum\n");
      }
  }
  printf("Fim de Jogo\n");
}
