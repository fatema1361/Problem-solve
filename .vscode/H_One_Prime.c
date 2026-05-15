#include<stdio.h>
int main()
{
    int X,r=1;
    scanf("%d",&X);
    for(int i=2;i<X/2;i++){
        if(X%i==0){
            r=0;
            break;
        }

    }
    if(r){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}