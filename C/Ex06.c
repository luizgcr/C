#include <stdio.h>

int main(int argc, char const *argv[])
{
    float R, D;

    printf("R$");
    scanf("%f", &R);

    D = 5.26 * R;

    printf("$%.2f", D);
    scanf("%f", &D);

    return 0;
}