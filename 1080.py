vet=[0]*100
maior=0
posicao=0
for i in range(100):
    vet[i]=int(input())
for i in range(100):
    if maior<vet[i]:
        maior=vet[i]
        posicao=i+1
print(maior)
print(posicao)