#include<stdio.h>
 int swap(int X,int Y){
    int temp =X;
    X=Y;
    Y=temp;
   printf("%d %d\n",X,Y); 
}
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    swap(X,Y);
    return 0;
}