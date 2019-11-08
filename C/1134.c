#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x=0,alcool=0,gasolina=0,diesel=0;
    while(x!=4){
        scanf("%d",&x);
        if(x==1){
            alcool=alcool+1;
        }
        if(x==2){
            gasolina=gasolina+1;
        }
        if(x==3){
            diesel=diesel+1;
        }
        if(x==4){
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n",alcool);
            printf("Gasolina: %d\n",gasolina);
            printf("Diesel: %d\n",diesel);
            break;
        }
    }
}