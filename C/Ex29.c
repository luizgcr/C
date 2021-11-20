#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int n=0,n2=0,r, soma=0;

  for(int n=0; n != 102; n = n +2){{
        r = n2 + n;  
        printf("%i + %i = %i \n", n2, n, r);
        n2 = r;
        soma = r + soma;
      }
  }
   printf("A soma dos valores e igual a %i", soma);

  return 0;
}