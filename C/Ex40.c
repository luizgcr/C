#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]){
  int numeros[20][20];
  int coluna;
  int linha;
  int consulta;
  int i;
  int j;
  char newconsulta;
  int nova;
 
  printf("Digite os numeros para matriz M x N \n");
  printf("Qual valor da coluna?\n ");
  scanf("%i", &coluna);
  printf("Qual valor da linha?\n ");
  scanf("%i", &linha);

  while(coluna >10){
    printf("Digite um valor valido para coluna ");
    scanf("%i", &coluna);
  }
    while(linha >10){
    printf("Digite um valor valido para linha ");
    scanf("%i", &linha);
  }

  printf("Digite os numeros para matriz %i x %i \n", coluna,linha);
  for(int i=0; i<coluna; i++){
      for(int j=0; j<linha; j++){
        scanf("%i", &numeros[i][j]);
      }
  }
 
  printf("Os numeros digitados na matriz foram: \n");
  for(int i=0; i<coluna; i++){
      for(int j=0; j<linha; j++){
        printf("%i ", numeros[i][j]);
      }
      printf("\n");
  }
  printf("Consulta: Digite o valor para saber em qual posicao do vetor ele esta \n");
  scanf("%i", &consulta);
  for(int i=0; i<coluna; i++){
      for(int j=0; j<linha; j++){
        if(consulta ==numeros[i][j]){
          printf("o valor se encontra na posicao %i,%i do vetor ", i,j);
        
        }
        }
  
      }
      if(consulta ==numeros[i][j]){
          printf("o valor nao se encontra no vetor ");
        }
       printf("Deseja realizar nova consulta? ");
       scanf("%i", &newconsulta);

      while((toupper(newconsulta) != 'S') && (toupper(newconsulta) != 'N')){
      printf("Erro! Digite um dos caracteres solicitados. ");
      scanf("%s", &newconsulta); 
      }

       if(newconsulta == 'n' || newconsulta =='N'){
      printf("Programa encerrado......");
    
       } 

         printf("Consulta: Digite o valor para saber em qual posicao do vetor ele esta \n");
        scanf("%i", &consulta);
        for(int i=0; i<coluna; i++){
        for(int j=0; j<linha; j++){
        if(consulta ==numeros[i][j]){
          printf("o valor se encontra na posicao %i,%i do vetor ", i,j);
        
        }
        }
  
      }
      if(consulta ==numeros[i][j]){
          printf("o valor nao se encontra no vetor ");
        }
 
  return 0;

}