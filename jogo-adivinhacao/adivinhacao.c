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

  while(1){
  printf("Qual é seu %do chute\n?", tentativas);
  scanf("%d", &chute);

  if (chute < 0) {
  printf("Você não pode chutar números negativos");
  
    continue;}
  
  printf("Seu %do. chute foi %d\n", tentativas, chute);
  
  acertou = chute == numerosecreto;
  int maior = chute > numerosecreto;
  
  if (acertou) {
    printf("Parabéns tu acertastes\n");
    printf("A sorte anda sempre ao seu lado jogador\n");
    break;
  }
  else if(maior) {
    printf("O número chutado foi maior que o que a máquina escolheu\n");
    printf("Tente novamente, desistir não o levará a lugar nenhum\n");
  }
    else {
      printf("O número chutado foi menor que o que a máquina escolheu\n");
      printf("Tente novamente, desistir não o levará a lugar nenhum\n");
    }
  tentativas++;
  }
  printf("Fim de Jogo\n");
  printf("Você acertou em %d tentativas!", tentativas);
}

