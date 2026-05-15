#include<stdio.h>
int main()
{
    double A,B,C,D;
    double ans;
    scanf("%lf %lf %lf %lf",&A,&B,&C,&D);
    ans=((A*B)+C)/(double)D;
    printf("%.9lf\n",ans);
    return 0;
}