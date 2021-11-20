int main(int argc, char *argv[]){
  int numero, i, r;
 
  printf("Digite um numero: ");
  scanf("%i", &numero);
 
  while(numero < 0){
    printf("Erro! Apenas numeros positivos. Digite novamente: ");
    scanf("%i", &numero);
  }

}