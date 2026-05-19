#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(3>n){
        printf("%d\n",n);
    }
    else if(n%2==0){
        printf("%d\n",n/2);
    }
    else if(n%2!=0){
        printf("%d\n",3*n-1);
    }
    return 0;
}