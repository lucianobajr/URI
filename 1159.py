x=1
soma=0
while x!=0:
    x=int(input())
    if x!=0:
        if x%2==0:
            for i in range(x,x+9):
                if i%2==0:
                    soma+=i
        else:
            for i in range(x,x+10):
                if i % 2 == 0:
                    soma+=i
        print(soma)
        soma=0
    else:
        break