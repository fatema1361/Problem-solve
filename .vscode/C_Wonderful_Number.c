#include<stdio.h>
int isOdd(int N){
    return N%2!=0;
    
}
int isBio(int N){
    int b[32],len=0;
    while(N>0){
        b[len++]=N%2;
        N=N/2;
    }
    for(int i=0;i<len/2;i++){
        if(b[i]!=b[len-i-1])
        return 0;
    }
    return 1;

}
int main()
{
    int N;
    scanf("%d",&N);
    isOdd(N);
    isBio(N);
    if(isOdd(N)&&isBio(N)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}