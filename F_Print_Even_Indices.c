#include<stdio.h>
void func(int N,long long int A[],int i){
    if(i>=N){
        return;
    }
    func(N,A,i+2);
    printf("%lld ",A[i]);
}
int main()
{
    int N;
    scanf("%d",&N);
    long long int A[N];
    for(int i=0;i<N;i++){
        scanf("%lld",&A[i]);
        
    }
   func(N,A,0);
    return 0;
}