#include<stdio.h>
#include<string.h>
int is_palindrome(char S[]){
    int flag=1;
    int len=strlen(S);
    for(int i=0;i<len/2;i++){
        if(S[i]!=S[len-i-1]){
           flag=0;
     
           break;
        }
    }
    return flag;
}
int main()
{
    char S[1001];
    scanf("%s",S);
    char ans=is_palindrome(S);
    if(ans==1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    
    return 0;
}