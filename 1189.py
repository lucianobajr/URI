t=input('Opçao')
S=0
cont=0
dim=int(input('Dimensao'))
X=0
matriz=[[0 for i in range(dim)]for j in range(dim)]
for i in range(dim):
    for j in range(dim):
        X+=1
        matriz[i][j]=X
        if i>j and i+j<dim-1:
            S+=matriz[i][j]
            cont+=1
if t=='S':
    print('%.1f'%S)
elif t=='M':
    print('%.1f'%(S/cont))