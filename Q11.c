#include<stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int num1, num2, num3;
    printf("Enter First number : ");
    scanf("%d", &num1);

    printf("\nEnter Second number : ");
    scanf("%d", &num2);

    printf("\nEnter Third number : ");
    scanf("%d", &num3);

    if (num1 == 0 || num2 == 0 || num3 == 0)
    {
        printf("\nNumber should not be equal to 0\n");
    }

    else if (num1 > num2) 
    {
        if (num1 > num3) 
        {
            printf("\n\n%d is the Largest \n", num1);
            printf("%d > %d > %d\n", num1, num3,num2);
        } 

        else if (num1 == num3) 
        {
            printf("\n\nThe numbers are equal and one is smaller\n");
            printf("%d = %d > %d\n", num1, num3, num2);
        } 

        else 
        {
            printf("\n\n%d is the Largest \n", num3);
            printf("%d > %d > %d\n", num3, num1, num2);
        }
    }

    else 
    {
        if (num2 > num3) {
            printf("\n\n%d is the Largest \n", num2);
            printf("%d > %d > %d\n", num2, num3, num1);
        } 

        else if (num2 == num3) 
        {
            printf("\n\nThe numbers are equal and one is smaller\n");
            printf("%d = %d > %d\n", num2, num3, num1);
        } 

        else 
        {
            printf("\n\n%d is the Largest \n", num3);
            printf("%d > %d >%d\n", num3, num2, num1);
        }
    }

    return 0;
}
