#include<stdio.h>
int main()
{
    int N,sum=0;

    scanf("%d",&N);
    char A[N+1];
    for(int i=0;i<N;i++){
        scanf("%s",A);
        sum = sum + (A[i]-'0');
    }

    printf("%d\n",sum);

    return 0;
}
