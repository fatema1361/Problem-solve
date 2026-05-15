#include<stdio.h>
#include<math.h>
int main()
{
    double R;
    long double area;
    scanf("%lf",&R);
   long double pi = 3.141592653;
    area = pi * R * R;
    printf("%.9Lf\n",area);
    return 0;
}