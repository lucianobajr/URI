#include <stdio.h>

int main()
{
    double valor;
    int n100,n50,n20,n10,n5,n2,m100,m50,m25,m10,m5,m1;
    scanf("%lf",&valor);
    n100=valor/100;
    valor=valor-n100*100;
    n50=valor/50;
    valor=valor-n50*50;
    n20=valor/20;
    valor=valor-n20*20;
    n10=valor/10;
    valor=valor-n10*10;
    n5=valor/5;
    valor=valor-n5*5;
    n2=valor/2;
    valor=valor-n2*2;
    m100=valor/1;
    valor=valor-m100*1;
    m50=valor/0.5;
    valor=valor-m50*0.5;
    m25=valor/0.25;
    valor=valor-m25*0.25;
    m10=valor/0.10;
    valor=valor-m10*0.10;
    m5=valor/0.05;
    valor=valor-m5*0.05;
    m1=valor/0.01;
    printf("NOTAS:\n%d nota(s) de R$100.00\n%d nota(s) de R$50.00\n%d nota(s) de R$20.00\n%d nota(s) de R$10.00\n%d nota(s) de R$5.00\n%d nota(s) de R$2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",n100,n50,n20,n10,n5,n2,m100,m50,m25,m10,m5,m1);
}