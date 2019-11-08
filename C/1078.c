#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val,i,resultado;
    scanf("%d",&val);
    resultado = 1;
    for(i = 1;i <= 10;i++)
    {
        resultado = i * val;
        printf("%d  x %d = %d\n",i,val,resultado);
    }
    return 0;
}   