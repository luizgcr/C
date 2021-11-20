sexo = str(input("Digite o sexo: "))
while((sexo.upper() != 'M') and (sexo.upper() != 'F')):
    print("Erro! Sexo invalido!\n")
    sexo = str(input("Digite novamente:\n"))