#include <stdio.h>

int main(){
    float a,b,c;

    scanf("%f %f %f",&a,&b,&c);

    if(a >= b+c || b >= a+c || c>=a+b){
        printf("NAO FORMA TRIANGULO\n");
    }else if(a*a==b*b+c*c){
        printf("TRIANGULO RETANGULO\n");
    }if(a*a>b*b+c*c){
        printf("TRIANGULO OBTUSANGULO\n");
    }if(a*a<b*b+c*c){
        printf("TRIANGULO ACUTANGULO\n");
    }if(a==b&&a==c&&b==c){
        printf("TRIANGULO EQUILATERO\n");
    }if(a==b || b==c || a==c){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}