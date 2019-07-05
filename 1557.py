dim=int(input())
matriz=[[0 for i in range(dim)]for j in range(dim)]
a=1
b=1
c=1
d=0
for i in range(dim):
    for j in range(dim):
        a=b*c
        matriz[i][j]=a
        c=c*2
        d=b
    b=1
    b*=2
    c=d
for i in range(dim):
    for j in range(dim):
        print(matriz[i][j],end=' ')
    print(' ')