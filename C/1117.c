#include <stdio.h>
#include <stdlib.h>

void main(){
    int cont=0;
    float media=0,nota;
    while(cont!=2){
        scanf("%f",&nota);
        if(nota>=0&&nota<=10){
            media=media+nota;
            cont=cont+1;
        }
        if(nota<0||nota>10){
            printf("nota invalida\n");
        }
        if(cont==2){
            break;
        }
    }
    media=media/2;
    printf("media = %.2f\n",media);
}