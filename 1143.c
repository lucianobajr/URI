#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j=1,x;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        printf("%d %d %d\n",j,j*j,j*j*j);
        j++;
    }
}