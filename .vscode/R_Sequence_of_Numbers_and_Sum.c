#include<stdio.h>
int main()
{
    int N,M;
    
    
    while(1){
    scanf("%d %d",&N,&M);
    if(N<=0||M<=0){
        break;
    }
    int start,end,sum=0;
    if(N<M){
        start=N;
        end=M;
    }
    else{
        start=M;
        end=N;
    }
    for(int i=start;i<=end;i++){
        sum=sum+i;
        printf("%d ",i);
        
    }
    printf("sum =%d\n",sum);
}
    return 0;
}
