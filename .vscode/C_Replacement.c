#include<stdio.h>
int main()
{
    int N,r=0;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
    scanf("%d",&A[i]); 
    if(A[i]<0){
     A[i]=2;
    }
    else if(A[i]>0){
        A[i]=1;
    }
    printf("%d ",A[i]);
 }

    return 0;
}