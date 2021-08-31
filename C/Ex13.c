#include<stdio.h>
int main(int argc, char const *argv[])
{
    int b, h, A;
    printf("Digite o valor da base: ");
    scanf("%i", &b);

    printf("Digite o valor da altura: ");
    scanf("%i", &h);

    A = b * h;

    if(A>100){
        printf("Terreno grande!");
    }
    else{
        printf("Terreno pequeno!");
    }
    return 0;
}