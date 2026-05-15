#include<stdio.h>
#include<string.h>
int main(){
    char S1[20],S2[20];
    int found=0;
    scanf("%s %s",&S1,&S2);
    int len1=strlen(S1);
    int len2=strlen(S2);
    if(len1!=len2){
        return 0;
    }
    else{
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
                if(S1[i]==S2[j]){
                    found=1;
                    break;
                }
                else{
                    found=0;
                }

        }
    }
    if(found){
        printf("An\n");
    }
    else{
        printf("not\n");
    }
}

return 0;
}
