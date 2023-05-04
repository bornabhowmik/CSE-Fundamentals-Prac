#include<stdio.h>
int main()
{
    char a[10000001];
    fgets(a,1000001,stdin);
    for(int i=0; a[i]!='\0'; i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}