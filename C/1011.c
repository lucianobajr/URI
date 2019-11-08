#include <stdio.h>

int main(void){
    double volume,pi;
    int raio;
    scanf("%d",&raio);
    pi=3.14159;
    volume=(4/3.0)*pi*raio*raio*raio;
    printf("VOLUME = %.3lf\n",volume);
}