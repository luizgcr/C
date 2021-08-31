#include <stdio.h>
 
int main(void)
{
    float base, altura, area;
 
    printf("BASE     = "); scanf("%f", &base);
    printf("ALTURA   = "); scanf("%f", &altura);
 
    area = base * altura;
 
    printf("AREA = %f m2 \n", area);
 
    system("pause");
 
    return 0;
}