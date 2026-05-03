#include<stdio.h>
int main()
{
    int count=0;
    char S[100001];
    scanf("%s",S);
    int len=strlen(S);
    for(int i=0;i<len;i++){
        if(S[i]!='a'&&S[i]!='e'&&S[i]!='i'&&S[i]!='o'&&S[i]!='u'){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}