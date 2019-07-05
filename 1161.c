#include <stdio.h>

int main()
{
   long long int M,N,FatM=1,FatN=1,i;
    while(scanf("%lld %lld",&M,&N) !=EOF){
        for(i=1;i<=M;i++){
            FatM=FatM*i;
        }
        for (i=1;i<=N;i++){
            FatN=FatN*i;
        }    
        printf("%lld \n",FatM+FatN);
        FatM=FatN=1;
    }
}