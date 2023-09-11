#include<stdio.h>

int main()
{
    int n;
    // printf("Enter a positive integer: ");
    scanf("%d", &n); 

    for(int i=1; i<=n; i++)
    {
        // printf("%d", i);
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        
        else
        {
            printf("%d No\n", i);
        }
    
    // printf("\n");
    }

    return 0;
}