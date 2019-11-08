#include <stdio.h>

int main(){
    int a,b,c,i,j,troca,vet[3],val1,val2,val3;

    scanf("%d %d %d",&a,&b,&c);

    vet[0]=a;
    vet[1]=b;
    vet[2]=c;

    val1=a;
    val2=b;
    val3=c;

    for (i=0;i<3;i++){
        for(j=0;j<2;j++){
            if(vet[j]>vet[j+1]){
                troca=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=troca;
            }
        }
    }

    a=vet[0];
    b=vet[1];
    c=vet[2];

    printf("%d\n%d\n%d\n",a,b,c);

    printf("\n");

    printf("%d\n%d\n%d\n",val1,val2,val3);
    return 0;
}