#include<stdio.h>
#include<string.h>
int main()
{
    int N;
    scanf("%d",&N);
    char S[100001];  
    scanf("%s",S);
    for(int i=0;i<N;i++){
       for(int j=i+1;j<N;j++){
          if(S[i]>S[j]){
            char temp=S[i];
            S[i]=S[j];
            S[j]=temp;
          }
       
    }
}
printf("%s\n",S);
    return 0;
}