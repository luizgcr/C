#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int valor, n=0, resultado, valor2, valor3, padrao=2, valor1=0; 
  printf("Digite um valor positivo menor que cem: ");
  scanf("%i", &valor);
    while(valor <0 || valor >100){
          printf("\nValor nao aceito. Digite um valor positivo menor que cem: ");
          scanf("%i", &valor);
    }
  valor3 = 3;
  resultado = 2;
  if(valor == 1){
    printf("%i\n", padrao);
    valor1 = 10;
  }
 if(valor == 2){
   resultado = resultado + valor3;
 }
resultado = 3;
padrao = padrao + resultado;
 for(int n=valor1; n < valor; n = n+1){

        resultado = resultado + 2;
        printf("%i\n", resultado);

        padrao = padrao + resultado;
      printf("padrao: %i\n", padrao);
         
  }
  return 0;
}