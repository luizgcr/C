tecla =str(input("Pressione alguma tecla: "))
n = 1
n2 = 1
for n in range(1,21,1):
      for n2 in range(1,11,1):
        r = n * n2;  
        print(f"{n} * {n2} = {r}")
        n2 = n2 + 1
n = n + 1 
n2 = 1