#include <stdio.h>

int main(int argc, char const *argv[])
{
    float P, A, IMC;

    printf("Peso: ");
    scanf("%f", &P);

    printf("Altura: ");
    scanf("%f", &A);

    IMC = P / (A * A);

    printf("IMC = %.2f", IMC);
    scanf("%f", &IMC);

    return 0;
}