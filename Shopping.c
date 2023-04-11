#include<stdio.h>

int main()
{
    int tk;
    scanf("%d",tk);

    if(tk>1000)
    {
        printf("I will buy a Punjabi\n");
        tk-=1000;
    }
    else if(tk>=500)
    {
        printf("I will buy new shoes\n");
        printf("Allisa will buy shoes\n");
    }
    else
    {
        printf("Bad Luck!\n");
        return 0;
    }

    
}