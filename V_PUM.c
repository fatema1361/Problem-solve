#include<stdio.h>
int main()
{
    int N,count=0,num=1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=3;j++){
            
            printf("%d ",num);
            num++;
        }
        printf("PUM\n");
        num++;
    }

    return 0;
}
