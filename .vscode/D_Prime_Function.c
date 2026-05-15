#include<stdio.h>
void isPrime(int T){
    while(T--){
        int N,flag=1;
        scanf("%d",&N);
        if(N<2){
            flag=0;
        }
        for(int i=2;i*i<=N;i++){
           if(N%i==0){
            flag=0;
            break;
           } 
        }
        if(flag){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    isPrime(T);
    return 0;
}