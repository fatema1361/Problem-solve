#include<stdio.h>
int main()
{
    int A,B,C,r;
    char S,Q;
    scanf("%d %c %d %c %d",&A,&S,&B,&Q,&C);
    if(S=='+'){
        r=A+B;
    }
    else if(S=='-'){
        r=A-B;
    }
    else if(S=='*'){
        r=A*B;
    }
    if(C==r){
        printf("Yes\n");
    }
    else{
        printf("%d\n",r);
    }
    return 0;
}