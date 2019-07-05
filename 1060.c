#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,c,d,e,f;
    int cont=0;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    scanf("%f",&f);
    if(a>0){
        cont=cont+1;
    }
    if(b>0){
       cont=cont+1;
    }
    if(b>0){
        cont=cont+1;
    }
    if(c>0){
        cont=cont+1;
    }
    else if(d>0){
        cont=cont+1;
    }
    if(e>0){
        cont=cont+1;
    }
    if(f>0){
       cont=cont+1;
    }
    printf("%d valores positivos\n",cont);
}