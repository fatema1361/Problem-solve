#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int l=1;
        int m=3*n;
        int r=2*n;
    for(int i=0;i<n;i++){
        printf("%d %d %d ",l+2,m,r);
        l++;
        m=m-2;
        r--;
    }
    printf("\n");
}
    return 0;
}