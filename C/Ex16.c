#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
float a, b, c;

printf("DIGITE O PRIMEIRO VALOR DO TRIANGULO: ");
scanf("%f", &a);

printf("DIGITE O SEGUNDO VALOR DO TRIANGULO: ");
  scanf("%f", &b);
  printf("DIGITE O TERCEIRO VALOR DO TRIANGULO: ");
  scanf("%f", &c);

if ( (( a + b) > c) &&
     (( a + c) > b) &&
     (( b + c) > a)){

if ( a == b){
    if ( a == c){
        printf(" TRIANGULO EQUILATERO");
    }
    else{
        printf(" TRIANGULO ISOSCELES");
    }
}
else{
    if( b == c){
        printf(" TRIANGULO ISOSCELES");
    }
    else{
        if(a == c){
        printf(" TRIANGULO ISOSCELES");
    }
        else{
        printf(" TRIANGULO ESCALENO");
    }
    }
}
}
else{
    printf("NAO E UM TRIANGULO");
}
  return 0;
}