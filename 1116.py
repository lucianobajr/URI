x=int(input())
for i in range(x):
    a,b=map(float,input().split())
    if int(a)==0:
        print('0.0')
    if int(b)==0:
        print('divisao impossivel')
    if int(a)!=0 and int(b)!=0:
        print('%.1f'%(a/b))