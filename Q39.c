#include <stdio.h>

int factorial(int num) 
{
    if (num == 0 || num == 1) 
    {
        return 1;
    }

    int result = 1;

    for (int i = 2; i <= num; i++) 
    {
        result *= i;
    }

    return result;
}

int main() 
{
    int number;

    printf("\nEnter a number to find its factorial: ");
    scanf("%d", &number);

    int result = factorial(number);

    printf("\n\nThe factorial of %d is %d\n\n", number, result);

    return 0;
}
