#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  //Declaração das variáveis
  float n1, n2, n3, n4, media;
  
  //Entrada de dados
  printf("Digite o primeiro numero: ");
  scanf("%f",&n1);
  
  printf("Digite o segundo numero: ");
  scanf("%f",&n2);

  printf("Digite o terceiro numero: ");
  scanf("%f",&n3);

  printf("Digite o quarto numero: ");
  scanf("%f",&n4);
  
  //Processamento
  media = (n1 + n2 + n3 + n4) / 4;
  
  //Saída
  printf("Media = %.1f\n",media);
  
  system("pause");//pausa da tela somente para Windows
  return 0;//retorno da função main  
}