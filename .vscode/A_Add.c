#include<stdio.h>
 int add(int X,int Y){
    return X+Y;
}
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    printf("%d\n",add(X,Y));
    return 0;
}