#include<stdio.h>
int main()
{
    int a,b,sum,sub,mlt,dvd;
    scanf("%d",&a,&b);
    sum=a+b;
    sub=b-a;
    mlt=a*b;
    dvd=b/a;
    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",mlt);
    printf("%d\n",dvd);
    return 0;
}