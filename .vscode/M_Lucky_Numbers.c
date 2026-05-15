#include<stdio.h>
int main()
{
    int A,B,n=0;
    scanf("%d %d",&A,&B);
    
    for(int i=A;i<=B;i++){
        int flag=0;
        
        int x=i;
        int temp=i;
        while(x)
        {
            
            x=x/10;
            temp=temp%10;

            if(temp!=4&&temp!=7)
            {
                flag=1;
                break;
            }
            temp=x;

        }
        if(flag==0)
        {
            printf("%d ",i);
            n=1;
        }
    }
    if(n==0)
    {
        printf("-1");
    }

    return 0;
}