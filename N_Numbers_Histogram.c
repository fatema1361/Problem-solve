#include<stdio.h>
int main()
{
    char S;
    int N;
    scanf("%c",&S);
    scanf("%d",&N);
    int X[N];
    for(int i=0;i<N;i++){
        scanf("%d",&X[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<X[i];j++){
            if(S=='+'){
                printf("+");
            }
            else if(S=='-'){
                printf("-");
            }
            else if(S=='*'){
                printf("*");
            }
            else if(S=='/'){
                printf("/");
            }
        }
        printf("\n");
    }
    return 0;
}