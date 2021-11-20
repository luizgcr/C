peso = float(input("Digite o peso: "))
altura = float(input("Digite a altura: "))

resultado = peso/(altura*altura)
 
if (resultado < 20):
    print("Abaixo do peso.")
elif(resultado >=25):
    print("Acima do peso.")
elif(resultado>=20 and resultado < 25):
    print("Peso ideal.")