#include<stdio.h>
#include<string.h>
int main()
{
    int N;
    scanf("%d",&N);
    char S[51],T[51];
    for(int k=0;k<N;k++){
    scanf("%s %s",S,T);
    int i=0,j=0;
    while(S[i]!='\0'||T[j]!='\0'){
        if(S[i]!='\0'){
            printf("%c",S[i]);
            i++;
        }
        if(T[j]!='\0'){
            printf("%c",T[j]);
            j++;
        }
        
    
}
printf("\n");
    }
     
    return 0;
}