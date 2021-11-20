valor =int(input("Digite um valor positivo: "))

while(valor < 0):
    print("Não pode numero negativo!")
    valor = int(input("Digite um valor positivo: \n"))
    
print("Digite o intervalo que voce deseja (segundo deve ser maior)\n")
valor1 = int(input("Primeiro valor: "))
valor2 = int(input("Segundo valor: "))
  
  
while(valor2 < valor1):
    valor2 =print(input("\nSegundo valor: "))
    valor2 = valor2 - 1; 
while(valor1 != valor2): 
     r = valor * valor2
     print(f"{valor}* {valor2} = {r}" )
     valor2 = valor2 - 1