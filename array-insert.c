#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n+1];
    for(int i=0;i<n;i++){
       scanf("%d",&A[i]);
    }
    int index;
    scanf("%d",&index);
    for(int i=n;i<index+1;i--){
       A[i]=A[i-1];
    }
    for(int i=0;i<=n;i++){
        printf("%d ",A[i]);
    }

    return 0;
}