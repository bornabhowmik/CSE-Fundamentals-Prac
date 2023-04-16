#include<stdio.h>
int main()
{
    int a,b,sum,sub,mlt,dvd;
    scanf("%d"&a,b);
    sum=a+b;
    sub=b-a;
    mlt=a*b;
    dvd=b/a;
    printf("%d",sum);
    printf("%d",sub);
    printf("%d",mlt);
    printf("%d",dvd);
    return 0;
}