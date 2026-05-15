#include<stdio.h>
void recursion(int N){
    if(N==0){
        return ;
    }
    if(N==1){
       printf("%d",N);
    } 
    else{
        printf("%d ",N);
    }
   recursion(N-1);
   
}
int main()
{
    int N;
    scanf("%d",&N);
    recursion(N);
    
    return 0;
}