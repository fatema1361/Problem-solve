#include<stdio.h>
void fun(int N,int r){
    if(r>N){
        return;
    }
    
        for(int j=1;j<=N-r;j++){
            printf(" ");
        }
        for(int j=1;j<=2*r-1;j++){
            printf("*");
        }
        printf("\n");

        fun(N,r+1);
    }

int main()
{
    int N;
    scanf("%d",&N);
    
    fun(N,1);
    
    return 0;
}