#include<stdio.h>
void fun(int T){
    while(T--){
        int N;
        char C;
        scanf("%d %c",&N,&C);
        for(int i=0;i<N;i++){
            printf("%c ",C);
        }
        printf("\n");
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    fun(T);
    return 0;
}