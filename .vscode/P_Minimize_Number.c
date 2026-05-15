#include<stdio.h>
int main()
{
    int N,j=0;
    scanf("%d",&N);
    int A[N],b=0;
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        if(A[i]%2!=0){
         b=1;

        }

    }
    if(b==1){
        printf("0\n");
    }
    else{
        while(b!=1){
            j++;
        for(int i=0;i<N;i++){
            A[i]=A[i]/2;
            if(A[i]%2!=0)
            {
                b=1;
                
            }
        }
    }
    printf("%d",j);
    }
    
    return 0;
}