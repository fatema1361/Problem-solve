#include<stdio.h>
int main()
{   
    long long int N;
    scanf("%lld",&N);
    N=(N/100)%10;
    printf("%d",N);
    return 0;
}