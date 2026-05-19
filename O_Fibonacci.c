#include<stdio.h>
int fib(int N){
    if(N==0||N==1){
        return 0;
    }
    
}
int main()
{
    int N;
    scanf("%d",&N);
   int ans= fib(N);
    printf("%d",ans);
    return 0;
}