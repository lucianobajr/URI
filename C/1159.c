#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,x=1,soma=0;
    while (x!=0){
        scanf("%d",&x);
        if(x!=0){
            if(x%2==0){
               for(i=x;i<x+9;){
                    if(i%2==0){
                        soma=soma+i;
                   }
                } 
            }
            else{
                for(i=x;i<x+10;){
                    if(i%2==0){
                        soma=soma+i;
                   }
                } 
            }
        }
        else{
            break;
        }
        printf("%d\n",soma);
        soma=0;
    }
}