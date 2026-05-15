#include<stdio.h>
int main()
{
    char S[1000];
    scanf("%s",S);
    int isPalindrome=1;
    int len=strlen(S);
    for(int i=0;i<len/2;i++){
        if(S[i]!=S[len-i-1]){
          isPalindrome=0;
        }
    }
    if(isPalindrome){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    

    
    return 0;
}