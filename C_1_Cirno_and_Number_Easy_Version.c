#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a;
        int d1,d2,n;
        scanf("%lld %d",&a,&n);
        scanf("%d %d",&d1,&d2);
        long long int ans=1e18;
        long long int b=0,temp=a;
        if(a==0){
            b=d1;
        }
        else{
        while(temp>0){
            b=b*10+d1;
            temp/=10;
        }
    }
        long long diff=llabs(a-b);
        if(diff<ans){
            ans=diff;
        }
        b=0,temp=a;
        if(a==0){
            b=d2;
        }
        else{
            while(temp>0){
            b=b*10+d2;
            temp/=10;
        }
    }
        diff=llabs(a-b);
        if(diff<ans){
            ans=diff;
        }
        printf("%lld\n",ans);

    }
    return 0;
}