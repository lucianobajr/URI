#include <stdio.h>

int main(void){
    int A,B;
    double C;
    scanf("%d %d %lf",&A,&B,&C);
    printf("NUMBER = %d\n",A);
    printf("SALARY = U$ %.2lf\n",(B*C));
}