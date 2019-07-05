#include <stdlib.h>
#include <stdio.h>

int main(void){
    int x,i,fat=1;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        fat=fat*i;
    }
    printf("%d\n",fat);
}