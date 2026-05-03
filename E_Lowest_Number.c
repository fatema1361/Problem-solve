#include<stdio.h>
int main()
{
    int N,pos=0;
    
    scanf("%d",&N);
    if(N<2){
    return 0;
}
    int A[N];
    
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);  
    }
    int min=A[0];
  for(int i=1;i<N;i++){
    if(A[i]<min){
        min=A[i];
        pos=i;
    
    }
}
    printf("%d %d\n",min,pos+1);
    
    
    return 0;
}