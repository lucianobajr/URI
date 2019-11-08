n=int(input())
soma=0
for i in range(n):
    x,y=map(int,input().split())
    if x>y:
        for j in range(y+1,x):
            if j%2!=0:
                soma+=j
    if x<y:
        for j in range(x+1,y):
            if j%2!=0:
                soma+=j
    if x==y:
        soma=0
    print(soma)
    soma=0