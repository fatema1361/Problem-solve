#include<stdio.h>
#include<string.h>
int main()
{   
    char temp;
    char A[11],B[11];
    scanf("%s",A);
    scanf("%s",B);
    int len_A=strlen(A);
    int len_B=strlen(B);
    printf("%d %d\n",len_A,len_B);
    printf("%s%s\n",A,B);
    temp=B[0];
    B[0]=A[0];
    A[0]=temp;

    printf("%s %s\n",A,B);
    return 0;
}