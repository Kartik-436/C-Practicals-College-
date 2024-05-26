#include<stdio.h>

int sum_of_digit(int n)
{
    if (n == 0)
    {
        return 0;
    }

    else
    {
        return (n % 10) + sum_of_digit(n / 10);
    }
}


int main()
{
    int n;

    printf("\nEnter a Number to get sum of its digits :- ");
    scanf("%d", &n);

    int result = sum_of_digit(n);
    printf("\n\nSum of digits of %d is => %d\n", n, result);
    return 0;
}
