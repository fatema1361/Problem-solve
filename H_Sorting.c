#include<stdio.h>
int main()
{
    int N,temp;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);

    }
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",A[i]);
    }
    
    return 0;
}