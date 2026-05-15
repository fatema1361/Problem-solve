#include<stdio.h>
//#include<math.h>
int main()
{
    int A,B,b;
    scanf("%d %d",&A,&B);
    int floor=A/B;
    printf("floor %d / %d = %d\n",A,B,floor);
    int ceil=A/B;
    if(A%B==0)
    {
       printf("ceil %d / %d = %d\n",A,B,ceil); 
    }
    else{
    printf("ceil %d / %d = %d\n",A,B,ceil+1);
    }
    float round=A/(float)B;
    float a=round-floor;
    if(a>=0.5)
    {
         b=floor+1;
    }
    else{
         b= floor;
    }
    printf("round %d / %d = %d\n",A,B,b);
    
    // printf("floor %.0f / %.0f = %d\n",A,B,floor);
    // printf("ceil %.0f / %.0f = %d\n",A,B,ceil);
    
    // printf("round %.0f / %0.f = %d\n",A,B,round);
    return 0;
}

