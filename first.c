
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&N);
        if(N%2==0){
            printf("Even: %d\n",N);

        }
        if(N%2!=0){
            printf("Odd: %d\n",N);
        }
        if(N>0){
            printf("Positive: %d\n",N);
        }
        if(N<0){
            printf("Negative: %d\n",N);
        }
    }
    return 0;
   
}