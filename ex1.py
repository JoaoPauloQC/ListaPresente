nome = str(input("Digite seu nome: "))
sal = float(input("Digite seu salário: "))


if ((sal >= 0) or (sal <= 400)):
    nv = sal * 1.15
elif ((sal > 400) or (sal <= 700)):
    nv = sal * 1.12
elif ((sal > 700)or (sal <= 1000)):
    nv = sal * 1.10
elif ((sal > 1000 ) or (sal <= 1800)):
    nv = sal * 1.07
elif ((sal > 1800) or (sal <= 2500)):
    nv = sal * 1.04
elif ((sal > 2500 )):
    nv = ( "%.2f" % sal ) 
else:
    print("inválido")

nv = '{:.2f}'.format(nv)

print(nome, "seu salário é", nv)