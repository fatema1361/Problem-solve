#include<stdio.h>
int main()
{
    float N;
    scanf("%f",&N);
    int intp=(int)N;

    if(N==intp){
        printf("int %d\n",intp);
    }
    else{
        float f=N-intp;
        printf("float %d %0.3f\n",intp,f);
    }
    
    return 0;
}
