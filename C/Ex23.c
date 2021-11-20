int main(int argc, char *argv[]){
  int numero1,numero2, i, r;
 
  printf("Digite um numero: ");
  scanf("%i", &numero1);

  printf("Digite um segundo numero: ");
  scanf("%i", &numero2);
 
  while(numero1 >= numero2){
    printf("Erro! Numero 2 precisa ser maior. Digite novamente o numero 2: ");
    scanf("%i", &numero2);
  }

}