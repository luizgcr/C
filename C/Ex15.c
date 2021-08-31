#include <stdio.h>

int main(int argc, char const *argv[])
{
    float P, A, R;

    printf("Peso: ");
    scanf("%f", &P);

    printf("Altura: ");
    scanf("%f", &A);

    R = P/(A*A);

    if(R<20){
        printf("Abaixo do peso %f", R);
    }
    else if(20<R<25){
        printf("Peso ideal %f", R);
    }
    else{
        printf("Acima do peso %f", R);
    }
    return 0;
}