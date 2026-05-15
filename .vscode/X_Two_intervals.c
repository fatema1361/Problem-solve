#include<stdio.h>
int main()
{
    int l1,l2,r1,r2;
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
    int start,end;
    if(l1>l2){
        start=l1;
    }
    else{
        start=l2;
    }
    if(r1>r2){
        end=r2;

    }
    else{
        end=r1;
    }
    if(start<=end){
        printf("%d %d\n",start,end);
    }
    else{
       printf("-1\n");
    }
    return 0;
}