#include<stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int num1, num2;
    printf("Enter Nunmber 1 : ");
    scanf("%d", &num1);
    printf("Enter Nunmber 2 : ");
    scanf("%d", &num2);

    (num1 > num2) ? printf("\n\nNum1 is greater than num2\n%d is Greater than %d", num1, num2) : printf("\n\nNum2 is greater than num1\n%d is greater than %d", num2, num1);

    return 0;
}
