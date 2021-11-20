numeros = []
for i in range(0, 20, 1):
    x = int(input('Digite um numero: '))
    if(i == 0):
        constante = int(input('Digite a constante multiplicativa: '))
    x= x* constante
    numeros.append(x) 
    
print('Os numeros digitados multiplicados pela constante: ')

for i in range(0, 20, 1):
    print(numeros[i])