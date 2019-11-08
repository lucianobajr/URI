y=int(input())
for w in range(y):
    sudoku=[[0 for i in range(9)]for j in range(9)]
    linha=''
    coluna=''
    instancia=''
    for i in range(9):
        for j in range(9):
            sudoku[i][j]=int(input())
    for i in range(8):
        for j in range(8):
            if sudoku[i][0]!=sudoku[i][j+1]:
                linha='sim'
            else:
                linha='nao'
    for i in range(8):
        for j in range(8):
            if sudoku[j][i]!=sudoku[j+1][i]:
                coluna='sim'
            else:
                coluna='nao'
    if linha=='sim' and coluna=='sim':
        instancia='SIM'
    elif linha!=coluna:
        instancia='NAO'
    else:
        instancia='NAO'
    print('Instancia',w)
    print(instancia)