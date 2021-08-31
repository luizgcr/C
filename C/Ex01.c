
#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main()

{

float A,B,C,P,Area;

printf("Digite o tamanho do lado A do triangulo: ");

scanf("%f",&A);

printf("Digite o tamanho do lado B do triangulo: ");

scanf("%f",&B);

printf("Digite o tamanho do lado C do triangulo: ");

scanf("%f",&C);

if(A>=B+C)

printf("Nao e triangulo");

else

if (B>=A+C)

printf("Nao e triangulo");

else

if (C>=A+B)

printf("Nao e triangulo");

else
{
P=((A+B+C)/2);

Area=sqrt(P*(P-A)*(P-B)*(P-C));

printf("\n%f\n", Area);

}
system("pause");
}
