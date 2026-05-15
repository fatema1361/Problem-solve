#include<stdio.h>
int main()
{
   int N,first=0,second=1,fibonacci=0;
   scanf("%d",&N);
   for(int i=1;i<=N;i++){
      printf("%d ",first);
      fibonacci=first+second;
      first=second;
      second=fibonacci;
     
   }
    return 0;
}