#include<stdio.h>

int main(void){
    int a,b,c,d;
    double val1,val2,total;
    scanf("%d %d %lf",&a,&b,&val1);
    scanf("%d %d %lf",&c,&d,&val2);
    total=(b*val1)+(d*val2);
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
}