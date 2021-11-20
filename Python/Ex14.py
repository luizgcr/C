v1 = float(input("Digite o valor 1: "))
v2 = float(input("Digite o valor 2: "))
v3 = float(input("Digite o valor 3: "))
 
if (v1 > v2 and v1> v3):
    print(f"{v1} é o maior valor. ", )
elif(v2 > v1 and v2 > v3):
    print(f"{v2} é o maior valor.")
elif(v3>v1 and v3>v2):
    print(f"{v3} é o maior valor.")