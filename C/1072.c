#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,a,in=0,out=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a>=10&&a<=20){
            in=in+1;
        }
        else{
            out=out+1;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
}