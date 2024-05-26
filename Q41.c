/*
    Factorial of a number using recursion.
*/

#include<stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    else if (n < 0)
    {
        printf("The number entered is negative please enter a positive integer !");
    }

    else
    {
        return n * factorial(n-1);
    }
    
}


int main()
{
    int n, fact;

    printf("Enter a number : ");
    scanf("%d", &n);

    fact = factorial(n);
    printf("Factorial of %d is => %d", n, fact);

    return 0;
}
