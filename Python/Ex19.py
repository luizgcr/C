aceleracao = float(input("Digite o valor de aceleracao: "))
v0 = float(input("Digite a velocidade inicial: "))
T = float(input("Digite o valor de tempo do percurso: "))
V = v0 + (aceleracao *T)
 
if (V <= 40):
            print("Veículo muito lento.") 

elif(V <= 60):
    print("Velocidade permitida.")

elif(V <= 80):
    print("Velocidade de cruzeiro.")

elif(V <= 120):
    print("Veículo rápido.")

elif(V > 120):
    print("Veículo muito rápido.")

else:
    print("Digite um valor válido. ")