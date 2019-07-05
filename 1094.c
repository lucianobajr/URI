#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,tot=0,totc=0,totr=0,tots=0,val,quant;
    float porc=0,porr=0,pors=0;
    char tipo[1];
    scanf("%d",&quant);
    for(i=0;i<quant;i++){
        scanf("%d %s",&val, tipo);
        if(strcmp(tipo,"C")==0){
            tot=tot+val;
            totc=totc+val;
        }
        if(strcmp(tipo,"R")==0){
            totr=totr+val;
            tot=tot+val;
        }
        if(strcmp(tipo,"S")==0){
            tots=tots+val;
            tot=tot+val;
        }
    }
    porc=(float)(totc*100)/(float)tot;
    porr=(float)(totr*100)/(float)tot;
    pors=(float)(tots*100)/(float)tot;
    printf("Total: %d cobaias\n",tot);
    printf("Total de coelhos: %d\n",totc);
    printf("Total de ratos: %d\n",totr);
    printf("Total de sapos: %d\n",tots);
    printf("Percentual de coelhos: %.2f %%\n",porc);
    printf("Percentual de ratos: %.2f %%\n",porr);
    printf("Percentual de sapos: %.2f %%\n",pors);
    return 0;
}