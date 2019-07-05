while True :
    A,B,C=[int(x) for x in input().split()]
    if A==0:
        exit()
        break
    else:
        print('%.0f'%((A*B)/(C/100))**(1/2))