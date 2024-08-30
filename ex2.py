repeat = 1
menor = float('inf')
maior = float('-inf')
p , i = 0 , 0
deno = 1
resul = 0
fo , ft , ftt , fou , ff = 0 , 0 , 0 , 0 , 0
rfo , rft , rftt , rfou , rff = 0 , 0 , 0 , 0 , 0

while (repeat == 1):
    stop = str(input("Aperte s para parar: "))
    if (stop == 's'):
        repeat = 2
        
    else:
        n = float(input("Digite o número: "))
        resul = resul + n
        media = resul / deno
        deno = deno + 1
        if ( n == 0):
            p = p
            i = i
        elif ((n % 2 == 0) and ( n != 0)):
            p = p + 1
            print("É par!")
        else:
            i = i + 1
            print("É ímpar!")
        
        if ( n < 0 ):
            fo = fo + 1
            rfo = rfo + n
        elif ( n >= 0) and ( n < 15):
            ft = ft + 1
            rft = rft + n
        elif ( n >= 15) and ( n < 100):
            ftt = ftt + 1
            rftt = rftt + n
        elif ( n >= 1000) :
            fou = fou + 1
            rfou = rfou + n
        elif ( n >= 101) and ( n < 1000):
            ff = ff + 1
            rff = rff + n
        
        if ( n > maior):
            maior = n
        if ( n < menor):
            menor = n
        
        
if ( menor != 'inf'):
       print("N = ", n , "\nMaior =" , maior , "\n Menor =" , menor , "\nPares = ", p , "\nImpares = ", i , "\nmedia =" , media , "\n Faixa 1,2,3,4,5 tem" , fo , ft , ftt , fou , ff , "\nTotal das faixas" , rfo , rft , rftt , rfou , rff)