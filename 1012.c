#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double A,B,C,Y,triangulo,circulo,trapezio,quadrado,retangulo;
          scanf("%lf %lf %lf",&A,&B,&C);
    double pi = 3.14159;
    triangulo = A*C/2;
    circulo = pi*C*C;
    Y=A+B;
    trapezio = Y*C/2;
    quadrado = B*B;
    retangulo = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangulo,circulo,trapezio,quadrado,retangulo);
    return 0;
}