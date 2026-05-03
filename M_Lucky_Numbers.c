#include<stdio.h>
int main()
{
    int A,B,lucky;
    scanf("%d %d",&A,&B);
    for(int i=A;i<=B;i++){
        if(i==4||i==7||i==47||i==744){
           printf("%d %d\n",i,i);
        }
        else{
        lucky=-1;
        }
    }
    printf("%d\n",lucky);

    return 0;
}