#include <stdlib.h>
#include <stdio.h>

int main(void){
    int T,i,PA,PB,anos=0;
    float G1,G2;
    scanf("%d",&T);
    for (i=0;i<T;i++){
        scanf("%d %d %f %f",&PA,&PB,&G1,&G2);
        while(PA<=PB){
            if(PA>PB){
                break;        
            }
            if(PA<=PB){
                PA=(int)((PA*G1)/100)+PA;
                PB=(int)((PB*G2)/100)+PB;
                anos++;
                continue;
            }
        }
        if(anos<=100){
            printf("%d anos.\n",anos);
            anos=0;
        }
        else{
            printf("Mais de um seculo.\n");
            anos=0;
        }
    }
}