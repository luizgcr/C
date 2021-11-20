#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  char sexo;
 
  printf("Digite o sexo: ");
  scanf("%s", &sexo);


  while((toupper(sexo) != 'M') && (toupper(sexo) != 'F')){
      printf("Erro! Sexo invalido! Digite novamente: ");
      scanf("%s", &sexo);
  }

}