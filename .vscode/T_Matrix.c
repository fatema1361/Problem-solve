#include<stdio.h>
#include<math.h>
int main()
{
    int N,sum=0,sum1=0;
    scanf("%d",&N);
    int A[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
           scanf("%d",&A[i][j]);
        }
        //printf("\n");
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
           if(i==j){
            sum=sum+A[i][j];
           }
           if(i+j==N-1){
            sum1=sum1+A[i][j];
           }
        }
        
    }
    printf("%d",abs(sum-sum1));

    return 0;
}