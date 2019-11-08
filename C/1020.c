#include <stdio.h>

int main(void){
    int data,ano,mes,dia;
    scanf("%d",&data);
    ano=data/365;
    data=data-ano*365;
    mes=data/30;
    data=data-mes*30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,data);
}