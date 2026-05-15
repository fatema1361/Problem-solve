#include<stdio.h>
void fun(int N){
    for(int i=1;i<=N;i++){
        if(i<N){
            printf("%d ",i);
        }
        else{
            printf("%d",i);
        }
    }
    printf("\n");
}
int main()
{
    int N;
    scanf("%d",&N);
    fun(N);
    return 0;
}