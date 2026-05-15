#include<stdio.h>
int main()
{  
    char S[1000],T[1000];
    scanf("%s",S);
    scanf("%s",T);
    int lenS=strlen(S);
    int lenT=strlen(T);
    printf("%d %d\n",lenS,lenT);
    printf("%s %s\n",S,T);
    
    return 0;
}