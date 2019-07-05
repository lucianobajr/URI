cont=0
media=0
while True:
    try:
        nota=float(input())
        if nota>=0 and nota<=10:
            media+=nota
            cont+=1
        if nota<0 or nota>10:
            print('nota invalida')
            pass
        if cont==2:
            media=float(media/2)
            print('media = %.2f'%media)
            print('novo calculo (1-sim 2-nao)')
            resposta=int(input())
            if respota==1:
                cont=0
                media=0
            elif resposta==2:
                break
            elif resposta>1 and resposta!=2 or resposta<1 and resposta!=2:
                print('novo calculo (1-sim 2-nao)')
                resposta = int(input())
                if resposta==2:
                    break
                else:
                    cont=0
                    media=0
    except:
        EOFError