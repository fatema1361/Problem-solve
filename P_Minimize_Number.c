#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        
    }
    int count=0;
    while(1){
        int flag=1;
        for(int i=0;i<N;i++){
            if(A[i]%2!=0){
            flag=0; 
            break;
        }
    }
        if(flag==0){
            break;
        }
    
        
    for(int i=0;i<N;i++){
            A[i]=A[i]/2;
        }
        count++;

}
    
   printf("%d\n",count); 
    return 0;
}