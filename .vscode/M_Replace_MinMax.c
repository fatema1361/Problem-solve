#include<stdio.h>
int main()
{
    int N;
    
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int temp,maxI=0,minI=0,min=A[0],max=A[0];
    for(int i=1;i<N;i++){
        
        if(min>A[i]){
            min=A[i];
            minI=i;
        }
       
        if(max<A[i]){
            max=A[i];
            maxI=i;
        }
         
      }
    temp=A[minI];
    A[minI]=A[maxI];
    A[maxI]=temp;
    for(int i=0;i<N;i++){
        printf("%d ",A[i]);
    }
   
    return 0;
}