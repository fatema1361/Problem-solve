#include<stdio.h>
int main()
{
    int N,count_2=0,count_3=0;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        if(A[i]%2==0){
           count_2++;
        }
        else if(A[i]%3==0){
            count_3++;
        }
        else if(A[i]%2==0 && A[i]%3==0){
            count_2++;
        }
    }
    printf("%d %d\n",count_2,count_3);
    return 0;
}