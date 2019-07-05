n=int(input())
for i in range(n):
    a=int(input())
    if a%2==0 and a>0:
        print('EVEN POSITIVE')
    if a%2==0 and a<0:
        print('EVEN NEGATIVE')
    if a%2!=0 and a>0:
        print('ODD POSITIVE')
    if a%2!=0 and a<0:
        print('ODD NEGATIVE')
    if a==0:
        print('NULL')