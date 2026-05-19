#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a,b,n,c1=0;
        scanf("%lld %lld %lld",&n,&a,&b);
       long long int d=n/3;
        long long int r=n%3;
        
        if(3*a<b){
            c1=d*(3*a);
        }
        else{
           c1= d*b;
        }
        if(r*a<b){
            c1+=r*a;
        }
        else{
            c1+=b;
        }
        printf("%lld\n",c1);


    }

    return 0;
}