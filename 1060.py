vet=[0]*6
cont=0
for i in range(6):
    vet[i]=float(input())
    if vet[i]>0:
        cont+=1
print("{} valores positivos".format(cont))