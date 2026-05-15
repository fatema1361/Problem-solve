#include<stdio.h>
void recursion(int N){
    if(N==0){
        return ;
    }

    recursion(N-1);
   
     printf("I love Recursion\n");
}
int main()
{
    int N;
    scanf("%d",&N);
    recursion(N);

    return 0;
}