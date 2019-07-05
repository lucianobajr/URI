#include <stdio.h>
#include <stdlib.h>

void main(){
    int x;
    while(scanf("%d",&x)){
        if(x==2002){
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }   
    }
}