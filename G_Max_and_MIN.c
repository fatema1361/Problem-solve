
#include<stdio.h>
 int maxMin(int min,int max){
    
   printf("%d %d\n",min,max); 
}
int main(){
    int N;
    scanf("%d",&N);
    int X[N];
    for(int i=0;i<N;i++){
        scanf("%d",&X[i]);  
    }
    int min=X[0];
    int max=X[0];
    for(int i=1;i<N;i++){ 
        if(min>X[i]){
            min=X[i];
        }
        if(max<X[i]){
         max=X[i];
        }
    }
    maxMin(min,max);

    return 0;
}