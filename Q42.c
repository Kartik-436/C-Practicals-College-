/*
    Fibonacci series using recursion.
*/
#include<stdio.h>

int fibonacci(int n)
{
    if( n == 0 )
    {
        return 0;
    }

    else if (n == 1 || n == 2)
    {
        return 1;
    }
    
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}


void PrintFibonacci(int n)
{
    printf("\nFibonacci series upto %d is =>\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", fibonacci(i));
    }
}


int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    PrintFibonacci(n);
    return 0;
}
