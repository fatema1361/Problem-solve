#include<stdio.h>
#include<string.h>
int main()
{

    char X[20],Y[20];
    scanf("%s",X);
    scanf("%s",Y);
    if(strcmp(X,Y)<=0){
        printf("%s\n",X);
    }
    else{
        printf("%s\n",Y);
    }
    
    return 0;
}