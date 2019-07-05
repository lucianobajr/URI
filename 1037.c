#include <stdio.h>

int main(){
    double a;

    scanf("%lf",&a);

    if (a<0||a>100){
        printf("Fora de intervalo");
    }
    else if(a>=0 && a<=25){
        printf("Intervalo [0,25]");
    }
    else if(a>25 && a<=50){
        printf("Intervalo (25,50]");
    }
    else if(a>50 && a<=75){
        printf("Intervalo de (50,75]");
    }
    else if (a>75 && a<=100){
        printf("Intervalo de (75,100]");
    }
}