#include <stdlib.h>
#include <stdio.h>

int main(void){
    int x,y,i,soma=0,j,n,cont=0;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d %d",&x,&y);
        for(i=x;i<=10000000;i++){
            if(cont!=y){
                if(i%2!=0){
                    soma=soma+i;
                    cont++;
                }
            }
            if(cont==y){
                printf("%d\n",soma);
                break; 
            }
        }
        soma=0;
        cont=0;
    }
}