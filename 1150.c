#include <stdlib.h>
#include <stdio.h>

int main(void){
    int X,Z,cont=0,i=0,soma=0;
    scanf("%d %d",&X,&Z);
    if(Z<=X){
        while(Z<=X)
        {
            scanf("%d",&Z);
        }
    }
    i=X;
    while(soma<Z){    
        soma=soma+i;
        i++;
        cont++;
    }
    printf("%d\n",cont);
}