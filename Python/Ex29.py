n2 = 0
n = 0
soma = 0
r = 0
while(n != 102):
    r = n2 + n;  
    print(f"{n} + {n2} = {r}")
    n2 = r
    soma = soma + r
    n = n + 1
      
print(f"A soma dos valores e igual a {soma}")