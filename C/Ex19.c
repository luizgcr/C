#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  float A, V0, T, V;

  printf("Digite o valor de aceleracao: ");
  scanf("%f", &A);
  
  printf("Digite a velocidade inicial ");
  scanf("%f", &V0);

  printf("Digite o valor de tempo de percurso ");
  scanf("%f", &T);

  V = V0 + (A * T);
  
  if(V <= 40){
      printf("Veículo muito lento.");
    }  
    else if(V>40 && V<=60) {
      printf("Velocidade permitida.");
    }
    else if(V>60 && V<=80){
      printf("Velocidade de cruzeiro.");
    } 
    else if(V>80 && V<=120){
      printf("Veículo rápido.");
    }  
    else if(V>120){
      printf("Veículo muito rápido.");
    }
    else{
      printf("Digite um valor válido.");
    }  
  }