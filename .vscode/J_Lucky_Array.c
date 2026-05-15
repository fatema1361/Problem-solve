#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N],min=0,count=0;

    
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        
        if(min>A[i])
        {
            min=A[i];
        }

    }
    
    for(int i=0;i<N;i++){
        if(min==A[i]){
            count++;
        }

    }
    if(count%2==0){
        printf("Unlucky\n");
    }
    else{
        printf("Lucky\n");
    }
    return 0;
}