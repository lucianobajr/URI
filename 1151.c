#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x,i,aux=0,aux2=1,aux3=0;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        if(i<x-1){
            if(i<=1){
                printf("%d ",aux);
                aux=aux+aux2;
            }
            if(i==2){
                aux=1;
                printf("%d ",aux2);
                aux2=1;
            }
            if(i==3){
                aux2=aux;
                aux=aux+aux2;
                printf("%d ",aux);
                aux3=aux;
            }
            if(i>3){
                aux=aux2;
                aux=aux+aux3;
                printf("%d ",aux);
                aux2=aux3;
                aux3=aux;
            }
        }
        if(i==x-1){
            aux=aux2;
            aux=aux+aux3;
            printf("%d\n",aux); 
        }
    }
}