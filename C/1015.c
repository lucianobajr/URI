#include<stdio.h>
#include<math.h>

int main(void)
{
    double x1,y1,x2,y2,p1,p2,distancia;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    p1=x2-x1;
    p2=y2-y1;
    distancia=sqrt((p1*p1)+(p2*p2));
    printf("%.4lf\n",distancia);
}