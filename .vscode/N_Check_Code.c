#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    char s[A+B+2];
    scanf("%s",s);
    if(s[A]=='-')
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    
    return 0;
}