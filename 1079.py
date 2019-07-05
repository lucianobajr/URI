x=int(input())
soma=0
for i in range(x):
    a,b,c=[float(i) for i in input().split()]
    soma=(a*2)+(b*3)+(c*5)
    soma=soma/10
    print('%.1f'%soma)
    soma=0