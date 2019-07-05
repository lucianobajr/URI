#include <stdio.h>
#include <stdlib.h>

void main(){
    int i,j,n,x,y,soma=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(x>y){
            for(j=y+1;j<x;j++){
                if(j%2!=0){
                    soma=soma+j;
                }
            }
        }
        if(x<y){
            for(j=x+1;j<y;j++){
                if(j%2!=0){
                    soma=soma+j;
                }
            }
        }
        if(x==y){
            soma=0;
        }
        printf("%d\n",soma);
        soma=0;
    }
    
}