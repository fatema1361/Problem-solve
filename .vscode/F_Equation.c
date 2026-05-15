#include<stdio.h>
void fun(int X,int N){
     int S;
     S=X*X+N*N*N*N;
     printf("%d\n",S);

}
int main()
{
    int N,X;
    scanf("%d %d",&X,&N);
    fun(X,N);
    return 0;
}