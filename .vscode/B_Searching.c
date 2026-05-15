#include<stdio.h>
int main()
{
    int N,X,r=0;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&X);
    for(int i=0;i<N;i++){
        if(X==A[i]){
         r=i;
         break;
        }
        else{
            r=-1;
        }
    }
    printf("%d\n",r);

    return 0;
}