#include<stdio.h>
int main()
{
    int N,P;
    scanf("%d %d",&N,&P);
    int ans=(P*N)-((P*N)*0.2);
    printf("%d\n",ans);
    return 0;
}