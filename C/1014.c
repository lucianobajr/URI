#include <stdio.h>

int main(void){
    int distancia;
    double gastos,consumo;
    scanf("%d %lf",&distancia,&gastos);
    consumo=distancia/gastos;
    printf("%.3lf km/l\n",consumo);  
}