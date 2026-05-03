#include<stdio.h>
#include<limits.h>
int main()
{
    int T;
    scanf("%d",&T);
    int N;
    
    
    while(T--){
    scanf("%d",&N);
    
    if(N<2){
        return 0;
    }
    int A[N];

    for(int i=0;i<N;i++){
    scanf("%d",&A[i]);  
}
int r=0;
int min=INT_MAX;
for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
       r=A[i]+A[j]+(j-i); 
       if(r<min){
        min=r;
       }
    }
}
printf("%d\n",min);
    }

    return 0;
}