#include <stdio.h>

float factorial(int n) 
{
    float fact = 1.0;

    while (n > 0) 
    {
        fact *= n;
        n--;
    }

    return fact;
}

int main() 
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int x, n;

    do 
    {
        printf("Enter the value of X (Starting value): ");
        scanf("%d", &x);

        if (x == 0) 
        {
            printf("X cannot be zero. Please enter a non-zero value : \n");
        }
    } while (x == 0);

    do 
    {
        printf("Enter the value of N (Ending index): ");
        scanf("%d", &n);

        if (n <= 0) 
        {
            printf("N should be a positive integer. Please enter a valid value : \n");
        }
    } while (n <= 0);

    double sum = 0.0;

    for (int i = 0; i <= n; i++) 
    {
        sum += (float)x / factorial(2 * i);
    }

    printf("Sum of the series : %.2f\n", sum);

    return 0;
}
