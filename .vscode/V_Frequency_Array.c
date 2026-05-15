#include<stdio.h>
int main()
{
    int N,M;
    
    scanf("%d %d",&N,&M);
    int A[N];
    int count[M+1];
    for(int i=0;i<=M;i++){
       count[i]=0;
    }
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        int index=A[i];
        if(index>=1&&index<=M){
          count[index]++;
        }
         
    }
    for(int i=1;i<=M;i++){  
     printf("%d\n",count[i]);   
            
    }
    return 0;
}
