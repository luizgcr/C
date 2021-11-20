#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int r, valor;
  printf("Digite um valor positivo: ");
  scanf("%i", &valor);

  while(valor<0){
      printf("Digite um valor positivo: ");
      scanf("%i", &valor);
  }

  for (int n=0; n != 11; n++){
    r = valor * n;
    printf("%i x %i = %i\n",valor, n,r);
  }
 
  return 0;
}