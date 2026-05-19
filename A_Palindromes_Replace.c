#include<stdio.h>
#include<string.h>
int main()
{
    char S[105];
    scanf("%s",S);
    int len=strlen(S);
    int flag=1;
    
       
       for(int i=0;i<len/2;i++){
           int j=len-i-1;
           
           if(S[i]=='?' && S[j]=='?'){
            S[i]=S[j]='a';

           }
           else if(S[i]=='?'){
            S[i]=S[j];
           }
           else if(S[j]=='?'){
            S[j]=S[i];
           }
           else if(S[i]!=S[j]){
              flag=0;
              break;
            } 
           
        }
    
    if(flag==0){
        printf("-1");
    }
    else{
        
        printf("%s\n",S);
    }
    return 0;
}