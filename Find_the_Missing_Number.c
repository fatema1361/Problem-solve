#include<stdio.h>
int main()
{
    int T,A,B,C;
    long long int M;
    scanf("%d",&T);
    while(T--){
         scanf("%lld %d %d %d",&M,&A,&B,&C);
         long long int r=A*B*C;
         long long int ans=M/r;
         if(r==0){
            printf("-1\n");
         }
         if(M%r==0){
          printf("%lld\n",ans);
         }
         else{
            printf("-1\n");
         }
         
    }
    return 0;
}