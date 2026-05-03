#include<stdio.h>
#include<string.h>
int main()
{
    char S[10000001];
    scanf("%s",S);
    int len=strlen(S);
    char X[26]={0};
    for(int i=0;i<len;i++){
       int index=S[i]-'a';
       X[index]++; 
    }
    for(int i=0;i<26;i++){
        if(X[i]>0){
       printf("%c : %d\n",i+'a',X[i]); 
    }
}
    return 0;
}