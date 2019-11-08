#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x,y,i,soma=0;
    scanf("%d",&x);

    scanf("%d",&y);

    if(x>y){
        for(i=y;i<=x;i++){
            if(i%13!=0){
                soma=soma+i;
            }
        }
    }

    if(y>x){
        for(i=x;i<=y;i++){
            if(i%13!=0){
                soma=soma+i;
            }
        }
    }

    if(x==y){
        if(x%13!=0){
            soma=x;
        }
        else{
            soma=0;
        }
    }

    printf("%d\n",soma);
}