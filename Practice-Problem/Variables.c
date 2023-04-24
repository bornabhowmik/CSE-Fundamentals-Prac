#include<stdio.h>
int main()
{
    int A, B;
    float C;
    char D;
    
    printf("Enter an integer A: ");
    scanf("%d",&A);
    printf("Enter another integer B: ");
    scanf("%d",&B);
    printf("Enter a floating value C: ");
    scanf("%f",&C);
    printf("Enter a character D: ");
    scanf("%c",&D);

    // printf("The value you entered are:\n");
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%f\n", C);
    printf("%c\n", D);

    return 0; 
}