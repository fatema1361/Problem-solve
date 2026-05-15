#include<stdio.h>
int main()
{
    int T,found=0;
    scanf("%d",&T);
    char S[100001];
    while(T--){
    for(int i=0;i<T;i++){
        scanf("%s",S);
      if(S[i]=='010'){
        printf("Bad\n");
      }
      else if(S[i]=='101'){
        printf("Good\n");
      }
    }
} 
    return 0;
}