#include<stdio.h>
void avg(int N){
    float sum=0;
    int A[N];
    for(int i=0;i<N;i++){
     scanf("%f",&A[i]);
      sum=sum+A[i];
    } 
    double a=sum/N;
    printf("%.7lf\n",a);
}

int main()
{
    int N;
    scanf("%d",&N);
    avg(N);
    return 0;
}