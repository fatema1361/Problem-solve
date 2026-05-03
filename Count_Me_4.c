#include<stdio.h>
#include<string.h>
int main()
{
    char S[10001];
    int count[26]={0};
    scanf("%s",S);
    int len=strlen(S);
    for(int i=0;i<len;i++){
       int index = S[i]-'a';
       count[index]++;  
    }
    for(int i=0;i<26;i++){
        if(count[i]>0){
            printf("%c - %d\n",i+'a',count[i]);
        }
    }
    return 0;
}