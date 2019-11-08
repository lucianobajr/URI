x=int(input())
tot=0
totc=0
totr=0
tots=0
for i in range(x):
    val,tipo=input().split()
    if tipo=='C':
        tot=tot+float(val)
        totc=totc+float(val)
    if tipo=='R':
        tot=tot+float(val)
        totr=totr+float(val)
    if tipo=='S':
        tot = tot + float(val)
        tots = tots + float(val)
porc=(totc*100)/tot
porr=(totr*100)/tot
pors=(tots*100)/tot
print("Total: %d cobaias"%int(tot))
print("Total de coelhos: %d"%int(totc))
print("Total de ratos: %d"%int(totr))
print("Total de sapos: %d"%int(tots))
print("Percentual de coelhos: %.2f %%"%float(porc))
print("Percentual de ratos: %.2f %%"%float(porr))
print("Percentual de sapos: %.2f %%"%float(pors))