a=float(input())
b=float(input())
c=float(input())
d=float(input())
e=float(input())
f=float(input())
soma=0
cont=0
if a>0:
    cont=cont+1
    soma=soma+a
if b>0:
    cont+=1
    soma=soma+b
if c>0:
    cont=cont+1
    soma=soma+c
if d>0:
    cont=cont+1
    soma=soma+d
if e>0:
    cont=cont+1
    soma=soma+e
if f>0:
    cont=cont+1
    soma=soma+f
resultado=soma/cont
print("{} valores positivos".format(cont))
print('%.1f'%resultado)