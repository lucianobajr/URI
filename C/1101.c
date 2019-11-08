#include <stdio.h>
#include <stdlib.h>

void main(){
    int m,n,i,soma=0,tmp=0;
    while(scanf("%d %d",&m,&n)!=0){
        if(m==0||n==0){
            break;
        }
        if(m<0||m<0){
            break;
        }
        else{
            if(m>n){
                for(i=n;i<=m;i++){
                    printf("%d ",i);
                    soma=soma+i;
                }
                printf("Sum=%d\n",soma);
                soma=0;
            }
            if(n>m){
                for(i=m;i<=n;i++){
                    printf("%d ",i);
                    soma=soma+i;
                }
                printf("Sum=%d\n",soma);
                soma=0;
            }
            if(m==n){
                soma=m;
                printf("%d Sum=%d\n",m,soma);
                soma=0;
            }


        }
        
    }
}