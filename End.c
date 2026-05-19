#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n/2;i++){
     printf("%d ",a[i]);
      printf("%d ",a[n-1-i]);  
    }
    if(n%2!=0){
        printf("%d\n",a[n/2]);
    }
    return 0;
}