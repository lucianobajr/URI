#include <stdio.h>
#include <stdlib.h>

void main(){
    int inter,gremio,wininter=0,wingremio=0,draw=0,resposta=1,amount=0;
    while(resposta==1){
        scanf("%d %d",&inter,&gremio);
        
        if(resposta==1){
            if(inter>gremio){
                wininter=wininter+1;
            }
            if (gremio>inter){
                wingremio=wingremio+1;
            }
            if(gremio==inter){
                draw=draw+1;
            }            
        }

        amount++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&resposta);

        if(resposta==2){
            printf("%d grenais\n",amount);
            printf("Inter:%d\n",wininter);
            printf("Gremio:%d\n",wingremio);
            printf("Empates:%d\n",draw);

            if(wininter>wingremio){
                printf("Inter venceu mais\n");
            }
            if (wingremio>wininter){
                printf("Gremio venceu mais\n");
            }
            if(wingremio==wininter){
                printf("Nao houver vencedor\n");
            }
            break;
        }
    }
}