#include <stdio.h>
#include <stdlib.h>

int main(void){

    int w1,w2,x1,x2,y1,y2,z1,z2,rd,rt,rm,rs;

    scanf("Dia %d",&w1);
    scanf("%d : %d : %d\n",&x1,&y1,&z1);
    scanf("Dia %d",&w2);
    scanf("%d : %d : %d",&x2,&y2,&z2);

    rd=w2-w1;

    rt = x2 - x1;
    if (rt < 0){
        rt = 24 + (x2 - x1);
        rd--;
    }

    rm = y2 - y1;
    if (rm <0){
        rm = 60 + (y2 - y1);
        rt--;
    }

    rs = z2 - z1;
    if (rs < 0){
        rs = 60 + (z2 - z1);
        rm--;
    }

    printf("%d dia(s)\n", rd);
    printf("%d hora(s)\n", rt);
    printf("%d minuto(s)\n", rm);
    printf("%d segundo(s)\n", rs);

}