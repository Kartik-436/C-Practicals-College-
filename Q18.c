#include <stdio.h>

int factorial(int number)
{
    if (number == 1)
    {
        return (1);
    }

    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int num, fact;

    printf("Enter the number you want factorial of : ");
    scanf("%d", &num);

    while (num <= 0) 
    {
        printf("Enter a non-zero positive integer: ");
        scanf("%d", &num);
    }

    fact = factorial(num);
    printf("\n\n==========> The factorial of %d is ===> %d\n\n\n", num, fact);


    return 0;
}
