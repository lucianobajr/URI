#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[100],i,maior=0,posicao=0;
    for(i=0;i<100;i++){
        scanf("%d",&vet[i]);
    }
    for(i=0;i<100;i++){
        if(maior<vet[i]){
            maior=vet[i];
            posicao=i+1;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",posicao);
}