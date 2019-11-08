#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,x;
    float a,b,c,soma=0;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%f %f %f",&a,&b,&c);
        soma=a*2+b*3+c*5;
        printf("%.1f\n",soma/10);
        soma=0;
    }
}