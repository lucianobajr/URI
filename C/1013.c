#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,Maiorab,Maior;
    scanf("%d %d  %d",&A,&B,&C);
    Maiorab=(A+B+abs(A-B))/2;
    Maior=(Maiorab+C+abs(Maiorab-C))/2;
    printf("%d ",Maior);
    printf("eh o maior\n");
    return 0;
}