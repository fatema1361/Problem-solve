#include<stdio.h>
int main()
{   
    long long int N,M;
    int lastF,lastS,ans=0;
    scanf("%lld %lld",&N,&M);
    lastF=N%10;
    lastS=M%10;
    ans=lastF+lastS;
    printf("%d\n",ans);

    return 0;
}