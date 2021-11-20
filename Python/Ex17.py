v1 = float(input("Digite o valor 1: "))
v2 = float(input("Digite o valor 2: "))
v3 = float(input("Digite o valor 3: "))
v1 = v1 * v1
v2 = v2 * v2
v3 = v3 * v3
 
if (v1 == (v2+v3)):
        print("Esses valores formam um triângulo.")
elif(v2 == (v1+v3)):
    print("Esses valores formam um triângulo. ")
elif(v3 == (v1 + v2)):
    print("Esses valores formam um triângulo. ")
else:
    print("Esses valores não formam um triângulo. ")