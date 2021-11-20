numeros = []
equivalente = []
for i in range(0, 20, 1):
    x = int(input('Digite um numero: '))
    numeros.append(x) 

constante = int(input('Digite a constante multiplicativa: '))
for i in range(0, 20, 1):
    y = numeros[i]*constante 
    equivalente.append(y) 
 
print('Os numeros digitados multiplicados pela constante: ')

for i in range(0, 20, 1):
    print(equivalente[i])