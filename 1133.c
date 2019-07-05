#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x,y,i,troca;
    scanf("%d %d",&x,&y);

    if(x>y){
        troca=x;
        x=y;
        y=troca;
    }

    for(i=x+1;i<y;i++){
        if(i%5==2||i%5==3){
            printf("%d\n",i);
        }
    }    
}