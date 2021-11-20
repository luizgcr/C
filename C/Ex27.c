#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int r, valor, valor1, valor2;
  printf("Digite um valor positivo: ");
  scanf("%i", &valor);

  while(valor<0){
      printf("Digite um valor positivo: ");
      scanf("%i", &valor);
  }
  printf("Digite o intervalo que voce deseja (segundo deve ser maior)\n");
  printf("Primeiro valor: ");
  scanf("%i", &valor1);
  printf("\nSegundo valor: ");
  scanf("%i", &valor2);

  while(valor2< valor1){
    printf("\nSegundo valor: ");
    scanf("%i", &valor2);
  }
  valor2 = valor2 - 1; 
  while(valor1 != valor2){ 
  r = valor * valor2;
  printf("%i * %i = %i\n", valor, valor2, r  );
  valor2 = valor2 - 1;
  }

  return 0;
}