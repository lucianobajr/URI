n=int(input())
in_=0
out=0
for i in range(n):
    a=int(input())
    if a>=10 and a<=20:
        in_+=1
    else:
        out+=1
print('{} in'.format(in_))
print('{} out'.format(out))