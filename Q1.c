#include<stdio.h>

int main()
{
    printf("\nName = Kartik Garg\n");
    printf("Enrollment No. & Class => 01813203123, IT-1, Second Sem\n\n");
    float a, b, sum;

    printf("Enter 1st number : ");
    scanf("%f", &a);

    printf("Enter 2nd number : ");
    scanf("%f", &b);

    sum = a + b;
    printf("\nSum of %.2f and %.2f is %.2f", a, b, sum);

    return 0;
}
