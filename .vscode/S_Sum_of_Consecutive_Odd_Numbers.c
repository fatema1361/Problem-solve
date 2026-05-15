#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
    int X,Y,sum=0;
    scanf("%d %d",&X,&Y); 
    int start,end;
    if(X>Y){
        start=Y;
        end=X;
    }
    else{
        start=X;
        end=Y;
    }
    
    for(int i=start+1;i<end;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
}  
    return 0;
}