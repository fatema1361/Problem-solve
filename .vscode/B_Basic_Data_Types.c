#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    float f;
    double d;
    char ch;
    long long int b;
    scanf("%d %lld %c %f %lf",&a,&b,&ch,&f,&d);
    printf("%d\n%lld\n%c\n%.2f\n%.1lf\n",a,b,ch,f,d);
    return 0;
}