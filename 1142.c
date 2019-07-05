#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,x,a=0;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        for(j=0;j<3;j++){
            a++;
            printf("%d ",a);
        }
        a++;
        printf("PUM\n");
    }
}