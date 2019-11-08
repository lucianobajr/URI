#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,a=0,b=1,c=1,j,x,aux1=0,aux2=0,aux3=1,aux4=2,aux5=60,aux6=30;
    scanf("%d",&x);
    x=x*2;
    for(i=1;i<x+1;i++){
        if (i%2!=0){
            a++;
        }
        printf("%d ",a);
        printf("%d ",b);
        printf("%d\n",c);
        if(i%2==0){
            aux1=aux1+2;
            b=b+aux1;

        }
        if(i%2==0&&i<8){
            aux2=6*aux3;
            c=aux2+c;
            aux3=aux3+aux4;
            aux4++;
        }
        if(i%2==0&&i>=8){
            c=c+aux5;
            aux5=aux5+aux6;
            aux6=aux6+6;
        }
        if(i%2!=0){
            b++;
            c++;
        } 
    }   
}