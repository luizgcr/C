numeros = []
equivalente = []
quantidade = int(input('Quantidade de valores: '))
while quantidade > 20 or quantidade <= 0:
    quantidade = int(input('Digite uma quantidade válida de valores: '))

for i in range(0, quantidade, 1):
    x = int(input('Digite um numero: '))
    numeros.append(x) 

localizacao = int(input('Qual número deseja localizar: '))

for i in range(0, quantidade, 1):

    if(localizacao == numeros[i]):
        print(f"Valor encontrado na posição {i} do vetor.")
        break
if(localizacao != numeros[i]):
    print("Valor não encontrado no vetor")