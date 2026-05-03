#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
    char S[10001];   
    scanf("%s",S);
    int cap=0,sml=0,dig=0;
    for(int i=0;S[i]!='\0';i++){
        if(S[i]>='A'&&S[i]<='Z'){
            cap++;
            }
        else if(S[i]>='a' &&S[i] <='z'){
            sml++;
        }
        else if(S[i]>='0' && S[i]<='9'){
            dig++;
        }

    }
    printf("%d %d %d\n",cap,sml,dig);
}
    
    return 0;
}