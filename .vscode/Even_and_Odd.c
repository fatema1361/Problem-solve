#include<stdio.h>
void odd_even(){
    int N,odd=0,even=0;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        if(A[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d",even,odd);
}
int main()
{
   odd_even(); 
    return 0;
}