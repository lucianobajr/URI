entrada = int(input())
numeros = []
cont = 0

for i in range(entrada):
    pessoas, pulos = list(map(int, input().split()))
    pulos -= 1
    cont = pulos
    for j in range(pessoas):
        numeros.append(j)
    while len(numeros) > 1:
        numeros.pop(cont)
        cont = (cont + pulos) % len(numeros)
        if (cont > len(numeros)):
            cont -= 1

    print("Case %d: %d" % (i + 1, (numeros[0] + 1)))
    numeros.clear()