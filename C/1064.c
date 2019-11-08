#include <stdio.h>
#include <stdlib.h>

int main(void){
    float a,b,c,d,e,f,cont,soma,resultado;
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
    if(a>0){
        cont++;
        soma=soma+a;
    } 
    if(b>0){
        cont++;
        soma=soma+b;
    }
    if(c>0){
        cont++;
        soma=soma+c;
    }
    if(d>0){
        cont++;
        soma=soma+d;
    }
    if(e>0){
        cont++;
        soma=soma+e;
    }
    if(f>0){
        cont++;
        soma=soma+f;
    }
    resultado=soma/cont;
    printf("%.0f valores positivos\n%.1f\n",cont,resultado);
}