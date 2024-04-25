#include <stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int num, first, second, third, sum;

    do
    {
        printf("\nEnter a Three Digit Number : ");
        scanf("%d", &num);
    } while (num > 999 || num < 100);

    if (num >= 100 && num <= 999)
    {
        first = (num / 100);
        second = (num % 100) / 10;
        third = (num % 100) % 10;

        printf("\n\nDigits of the entered number are:\n");
        printf("===> First Digit is: %d \n", first);
        printf("===> Second Digit is: %d \n", second);
        printf("===> Third Digit is: %d \n\n", third);

        sum = first + second + third;

        printf("Sum of the digits entered : %d\n\n", sum);
    }
    return 0;
}
