#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    int v=X/1000;
    if(v%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    return 0;
}