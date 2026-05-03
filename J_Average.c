#include<stdio.h>
double avgValue(double A[],int N){
    double avg,sum=0;
    for(int i=0;i<N;i++){
        sum=sum+A[i];
    }
    return sum/N;  
}

int main()
{
    int N;
    scanf("%d",&N);
    double A[N];
    
    for(int i=0;i<N;i++){
        scanf("%lf",&A[i]);     
    }
    
   double avg= avgValue(A,N);
    printf("%.6lf\n",avg);
    return 0;
}