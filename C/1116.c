#include <stdio.h>
#include <stdlib.h>

void main(){
    int i,x,y,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){        
        scanf("%d %d",&x,&y);
        if(x==0){
            printf("0.0\n");
        }
        if(y==0){
            printf("divisao impossivel\n");
        }
        if(x!=0&&y!=0){
            printf("%.1f\n",((float)x)/((float)y));
        }
    }    
}