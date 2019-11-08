y=int(input())
for i in range(y):
    cavalo=[]
    cavalo.append(input())
    peao=[]
    posicao=input()
    peao.append(posicao)
    while posicao!='0':
        posicao = input()
        peao.append(posicao)
    tabuleiro=[[0 for i in range(8)]for j in range(8)]
    horizontal=['a','b','c','d','e','f','g','h']
    vertical=['0','1','2','3','4','5','6','7']
    for i in range(8):
        for j in range(8):
            if vertical[i]==cavalo[0][0] and horizontal[j]==cavalo[0][1]:
                tabuleiro[i][j]='cavalo'
            else:
                tabuleiro[i][j]=0
    for i in range(8):
        for j in range(8):
            for k in range(8):
                if vertical[j]==peao[i][0] and horizontal[k]==peao[i][1]:
                    tabuleiro[j][k]='peao'
for i in range(8):
   for j in range(8):
        print(tabuleiro[i][j],end='             ')
   print('             ')
   print('             ')