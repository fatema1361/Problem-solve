#include<stdio.h>
int main()
{
    int T,M1,M2,D;
    //float R=0;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %d %d",&M1,&M2,&D);
      int R=(M1*D)/(M1+M2);
      int result=D-R;
       printf("%d\n",result); 
    }
    
    return 0;
}