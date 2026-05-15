#include<stdio.h>
int main()
{
    double A,B;
    scanf("%lf %lf",&B,&A);
    double pi=3.14159265359;
    double c=2*pi*(A*A)/2.0;
    double tri=0.5*A*A;
    double ans=(B*A)-c-tri;
    printf("%.6lf\n",ans);
    return 0;
}