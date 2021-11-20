maior = 0
numeros = []
for i in range(0, 10, 1):
    x = int(input('Digite um numero: '))
    numeros.append(x)
 
print('Os numeros que você digitou foram: ')
 
# Exibir de forma crescente
for i in range(0, 10, 1):
    if(numeros[i]>maior):
        maior = numeros[i]

print(maior)