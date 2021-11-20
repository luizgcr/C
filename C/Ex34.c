#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  
  int numeros[20]; 
  int maior; 
  // Looping para popular o vetor
  printf("Digite os 20 numeros: ");
  for(int i=0; i<20; i++){
      scanf("%i", &numeros[i]);
    if(numeros[i] > numeros[i-1]){
        maior = numeros[i];
    } 
  printf("O maior numero e %i", maior);
  }
 
  return 0;
}