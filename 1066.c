#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,p=0,r=0,t=0,m=0,n;
    for(i=0;i<5;i++){
        scanf("%d",&n);

        if(n%2==0){
            t++;        
        }
        else{
            m++;         
        }
        if (n>0){
            p++;          
        }
        else if(n<0){
            r++;          
        }
    }
    printf("%d valor(es) par(es)\n",t);
    printf("%d valor(es) impar(es)\n",m);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",r);
 }