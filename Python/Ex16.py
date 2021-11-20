v1 = float(input("Digite o valor 1: "))
v2 = float(input("Digite o valor 2: "))
v3 = float(input("Digite o valor 3: "))
 
if (v1 == v2):
    if (v1 == v3):
        print("Triângulo Equilátero.")
elif(v1 == v3):
    print("Triângulo Isósceles. ")
else:
    print("Triângulo Escaleno")