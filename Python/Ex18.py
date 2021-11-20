peso = float(input("Digite o peso: "))
altura = float(input("Digite a altura: "))
sexo = str(input("Digite o sexo: F femenino, M masculino \n"))
imc = peso/(altura*altura)
 
if (sexo == 'F' or sexo =='f'):
        if(imc <19):
            print("Abaixo do peso") 

elif(sexo == 'F' or sexo == 'f' and imc >= 19 and imc <24):
    print("Peso ideal")
elif(sexo == 'F' or sexo =='f' and imc >= 19 or imc >24):
    print("Acima do peso")



elif (sexo == 'M' or sexo =='m'):
        if(imc <20):
            print("Abaixo do peso") 

elif(sexo == 'M' or sexo =='m' and imc >= 20 and imc <25):
    print("Peso ideal")
else:
    print("Acima do peso")