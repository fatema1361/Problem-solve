#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A<=B&&A<=C){
        if(B<=C){
            printf("%d\n%d\n%d\n\n",A,B,C);
        }
        else{
            printf("%d\n%d\n%d\n\n",A,C,B);
        }
    }
    else if(B<=A&&B<=C){
        if(A<=C){
            printf("%d\n%d\n%d\n\n",B,A,C);
        }
        else{
            printf("%d\n%d\n%d\n\n",B,C,A);
        }
    }
    else if(C<=A&&C<=B){
        if(A<=B){
            printf("%d\n%d\n%d\n\n",C,A,B);
        }
        else{
            printf("%d\n%d\n%d\n\n",C,B,A);
        }
    }
    printf("%d\n%d\n%d\n",A,B,C);
    

    return 0;
}