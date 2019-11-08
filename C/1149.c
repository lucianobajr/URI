#include <stdlib.h>
#include <stdio.h>

int main(void){
    int i,A,N,soma=0;
    scanf("%d %d",&A,&N);
    if(N<=0){
        while (N<=0)
        {
            scanf("%d",&N);
        }
    }
    for (i=0 ;i<N;i++){
        soma=soma+A+i;
    }
    printf("%d\n",soma);
}