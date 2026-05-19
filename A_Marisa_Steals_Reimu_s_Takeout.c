#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int w,w0=0,w1=0,w2=0;
        for(int i=0;i<n;i++){
            scanf("%d",&w);
            if(w==0){
                w0++;
            }
            else if(w==1){
                w1++;
            }
            else{
                w2++;
            }


        }
        int ans=w0;
        int p=(w1<w2)?w1:w2;
        ans=ans+p;
        w1=w1-p;
        w2=w2-p;
        ans+=w1/3;
        ans+=w2/3;
    printf("%d\n",ans);



    }
    return 0;
}