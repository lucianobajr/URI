T=input('')
S=0
cont=0
dim=int(input('Dimensao:'))
matriz=[[0 for i in range(dim)]for j in range(dim)]
for i in range(dim):
    for j in range(dim):
        matriz[i][j]=int(input(f'[{i}][{j}]:'))
        if (i+j)<dim-1:
            cont+=1
            S+=matriz[i][j]
if T=='S':
    print('%.1f'%S)
elif T=='M':
    print('%.1f'%(S/cont))