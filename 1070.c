#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,x;
    scanf("%d",&x);
    for(i=x;i<=x+12;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}