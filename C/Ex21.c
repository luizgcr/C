#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  float P1, P2;

  printf("Digite o valor da nota P1 ");
  scanf("%f", &P1);
  
  P2= (15 - P1)/2;
  printf("Voce precisa de %.2f para conseguir a nota minima.", P2);
}