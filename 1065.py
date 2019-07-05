cont1=0
cont2=0
cont3=0
cont4=0
for i in range(5):
    a=int(input())
    if a%2==0:
        cont1+=1
    else:
        cont2+=1
    if a>0:
        cont3+=1
    if a<0:
        cont4+=1
print('%d valor(es) par(es)'%cont1)
print('%d valor(es) impar(es)'%cont2)
print('%d valor(es) positivo(s)'%cont3)
print('%d valor(es) negativo(s)'%cont4)