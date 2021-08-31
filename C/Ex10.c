#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x, y;
    printf("Digite um valor: ");
    scanf("%i", &y);

    printf("Digite outro valor: ");
    scanf("%i", &x);

    if(x < y){
        printf("O menor valor e: %i", x);
    }
    else{
        printf("O menor valor e: %i", y);
    }
    return 0;
}