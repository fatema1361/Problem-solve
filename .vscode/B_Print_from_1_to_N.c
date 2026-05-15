#include<stdio.h>
void recursion(int N){
    if(N==0){
        return ;
    }
    //N++;
    recursion(N-1);
    printf("%d\n",N);
    //recursion(N-1);
    //return N-1;
}
int main()
{
    int N;
    scanf("%d",&N);
    recursion(N);
    
    return 0;
}