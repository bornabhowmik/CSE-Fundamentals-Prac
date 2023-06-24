#include<stdio.h>
int main()
{
    int x,y,sum,sub,mul,div;
    scanf("%d %d",&x,&y);

    float f;

    sum =x+y;
    sub =x-y;
    mul =x*y;
    div =x/y;
    f=(float)div;

    printf("%d\n",sum);

    printf("%d\n",sub);

    printf("%d\n",mul);

    printf("%.2f\n",f);

    return 0;


}