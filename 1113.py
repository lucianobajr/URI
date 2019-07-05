while True:
    try:
        x,y=map(int,input().split())
        if x==y:
            break
        if x>y:
            print('Decrescente')
        if y>x:
            print('Crescente')
    except:
        EOFError
        break