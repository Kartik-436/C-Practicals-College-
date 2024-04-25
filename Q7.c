#include <stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int num, first, second, third, sum;

    printf("Enter the three digit number : ");
    scanf("%d", &num);

    first = (num / 100);
    second = (num %100) / 10;
    third = (num %100) % 10;
    
    printf("\n\nDigits of the entered number are:\n");
    printf("===> First Digit is: %d \n", first);
    printf("===> Second Digit is: %d \n", second);
    printf("===> Third Digit is: %d \n\n", third);

    printf("Reverse of the number entered : %d%d%d", third, second, first);
    return 0;
}
