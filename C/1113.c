#include <stdio.h>
#include <stdlib.h>

void main(){
    int x,y;
    while(scanf("%d %d",&x,&y)){
        if(x==y){
            break;
        }
        else{
            if(x>y){
                printf("Decrescente\n");
            }
            if(y>x){
                printf("Crescente\n");
            } 
        }
    }
}