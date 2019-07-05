#include <stdio.h>

int main(){
    int a,b;
    double codigo[5];
    scanf("%d %d",&a,&b);
    codigo[0]=4.00;
    codigo[1]=4.50;
    codigo[2]=5.00;
    codigo[3]=2.00;
    codigo[4]=1.50;
    printf("Total: R$ %.2lf\n",codigo[a-1]*b);
    return 0;
}