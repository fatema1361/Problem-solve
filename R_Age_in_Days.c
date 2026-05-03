#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int year=N/365;
    int month=(N%365)/30;
    int day=(N%365)%30;
    printf("%d years\n",year);
    printf("%d months\n",month);
    printf("%d days\n",day);

    return 0;
}