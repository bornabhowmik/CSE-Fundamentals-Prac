#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i=i+1)
    {
        printf("%d",i);
        if(i==5)
        {
            break;
        }
    }
    return 0;
}