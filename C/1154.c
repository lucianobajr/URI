#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x=1,cont=0,soma=0;
    double resultado;
    while(x>=0){
        scanf("%d",&x);
        if(x<0){
            resultado=(double)soma/(double)cont;
            printf("%.2lf\n",resultado);
            break;
        }
        if(x>=0){
            soma=soma+x;
            cont++;
        }
    }
}