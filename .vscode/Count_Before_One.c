#include<stdio.h>
int  count_before_one(int N,int A[]){
    
    int count=0;
     for(int i=0;i<N;i++){
      if(A[i]==1){
        break;
      }
      else{
        count++;
      }
      
     }
     return count;
}
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        
    }
     int r=count_before_one(N,A);
     printf("%d",r);
    
    return 0;
}