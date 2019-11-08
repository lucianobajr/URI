#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,x=1;
    while (x!=0){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        else{
            for(i=1;i<=x;i++){
                if(i<x){
                    printf("%d ",i);
                }
                else{
                    printf("%d\n",i);
                }
            }
        }
    }
}