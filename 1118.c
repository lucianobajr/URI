#include <stdio.h>
#include <stdlib.h>

void main(){
    int cont=0,resposta;
    double media=0,nota1,nota2;
    while(cont<2){
        scanf("%lf",&nota1);
        scanf("%lf",&nota2);
        if(nota1>=0&&nota1<=10){
            media=media+nota1;
            cont=cont+1;
        }
        if(nota2>=0&&nota2<=10){
            media=media+nota2;
            cont=cont+1;
        }
        if(nota1<0||nota1>10){
            printf("nota invalida\n");
        }
        if(nota2<0||nota2>10){
            printf("nota invalida\n");
        }
        if(cont==2){
            media=media/2.00;
            printf("media = %.2lf\n",media);
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&resposta);
            if(resposta==1){
                cont=0;
                media=0;
            }
            if(resposta==2){
                break;           
            }
            if(resposta>1||resposta<1&&resposta!=2){
                cont=1;
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&resposta);
                if(resposta==2){
                    break;
                }
                else{
                    cont=0;
                    media=0;
                }
            }
        }
    }
}