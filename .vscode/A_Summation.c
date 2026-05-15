#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    long long int A[N],sum=0;
    for(int i=0;i<N;i++){
        scanf("%lld",&A[i]);
       sum=sum+A[i];
       
    }
    if(sum<0){
        sum=-sum;
    }
    printf("%lld\n",sum);
    return 0;
}