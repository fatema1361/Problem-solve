#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int A[N],B[M];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<M;i++){
        scanf("%d",&B[i]);
    }
    int j=0;
    for(int i=0;i<N;i++){
        if(A[i]==B[j]){
            j++;
        }
    }
    if(j==M){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}