#include<stdio.h>
int main()
{
    int X,Y,sum=0,sub;
    long long int mul;
    scanf("%d %d",&X,&Y);
    sum=X+Y;
    sub=X-Y;
    mul=1LL*X*Y;
    printf("%d + %d = %d\n",X,Y,sum);
    printf("%d * %d = %lld\n",X,Y,mul);
    printf("%d - %d = %d\n",X,Y,sub);
    return 0;
}