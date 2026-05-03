#include<stdio.h>
#include<string.h>
int main()
{
    char S[100000];
    fgets(S,1000000,stdin);
    for(int i=0;S[i]!= '\\' ;i++){
        printf("%c",S[i]);
    }
    return 0;
}