#include <stdio.h>
#include <stdlib.h>

int main(){
    int h1,h2,m1,m2,rm,rt,resultado;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)){
        if(h1==0 && m1==0 && h2==0 && m2==0){
            break;
        }
        else
        {
            rt = h2 - h1;
            if (rt <=0){
                rt = 24 + (h2 - h1);
            }

            rm = m2 - m1;

            if (rm <=0){
                rm = 60 + (m2 - m1);
                rt--;
            }
            resultado=rt*60+rm;
            
            if (resultado>1440){
                resultado=resultado-1440;
            }
            printf("%d\n",resultado);
        }
    }
    return 0;
}