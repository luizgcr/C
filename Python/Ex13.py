base = float(input("Digite o valor da base: "))
altura = float(input("Digite o valor da altura: "))

area = base * altura
if (area > 100):
    print("Terreno grande.")
else:
    print("Terreno pequeno.")