cont=0
media=0
while cont<2:
    nota=float(input())
    if nota>=0 and nota<=10:
        media+=nota
        cont+=1
    else:
        print('nota invalida')
        pass
media=float(media/2)
print('media = %.2f'%media)