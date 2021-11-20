#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int r, n, n2;
char tecla;
  printf("Pressione alguma tecla: ");
  scanf("%s", &tecla);
for (int n=1; n != 21; n++){
    for (int n2=1; n2 != 11; n2++){
         r = n * n2;  
        printf("%i * %i = %i \n", n, n2, r);
       
    }
}
  return 0;
}