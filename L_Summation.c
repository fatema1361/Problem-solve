#include<stdio.h>
 long long int fun(int N){
    
    long long int A,sum=0;
    for(int i=0;i<N;i++){
        scanf("%lld",&A);
        sum=sum+A;
    }
    return sum;
}
int main()
{
    int N;
    scanf("%d",&N);
    printf("%lld\n",fun(N));
    return 0;
}