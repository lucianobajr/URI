#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,x,y,soma=0;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y){
        for(i=y+1;i<=x-1;i++){
            if(i%2!=0){
                soma=soma+i;
            }
        }
    }
    else if(y>x){
        for(i=x+1;i<=y;i--){
            if(i%2!=0){
                soma=soma+i;
            }
        }
    }
    printf("%d\n",soma);
}