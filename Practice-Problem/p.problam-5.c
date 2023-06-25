#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if(tk>=10000)
    {
        printf("Gucci Bag");
    }

    else if(tk>=5000)
    {
        printf("Levis Bag");
    }

    else if(tk>=20000)
    {
        printf("Gucci Bag && Gucci Belt");
    }

    else
    {
        printf("Something");
    }

    // else if(tk>=20000)
    // {
    //     printf("Gucci Bag && Gucci Belt");
    // }

    return 0;
}