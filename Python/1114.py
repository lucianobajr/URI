while True:
    try:
        x=int(input())
        if x==2002:
            print('Acesso Permitido')
            break
        else:
            print('Senha Invalida')
    except:
        EOFError
        break