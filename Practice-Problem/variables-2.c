#include<stdio.h>

int main()
{
    int A,B;
    float C;
    char D;

    printf("Enter an integer A: ");
    scanf("%d", &A);

    printf("Enter a big integer B: ");
    scanf("%d", &B);

    printf("Enter a float C: ");
    scanf("%f", &C);

    printf("Enter a char D: ");
    scanf("%c", &D);

    printf("%d\n", A);
    printf("%d\n", B);
    printf("%.2f\n", C);
    printf("%c\n", D);

    return 0;
}

// #include<stdio.h>

// int main() {
//     int A, B;
//     float C;
//     char D;

//     printf("Enter an integer A: ");
//     scanf("%d", &A);

//     printf("Enter a big integer B: ");
//     scanf("%d", &B);

//     printf("Enter a float C: ");
//     scanf("%f", &C);

//     printf("Enter a char D: ");
//     scanf(" %c", &D);  // Add a space before %c to ignore whitespace characters

//     printf("%d\n", A);
//     printf("%d\n", B);
//     printf("%.2f\n", C);
//     printf("%c\n", D);

//     return 0;
// }