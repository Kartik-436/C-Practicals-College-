#include <stdio.h>

int main() 
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int N;

    do 
    {
        printf("Enter a positive Number for end point (N > 1): ");
        scanf("%d", &N);
    } while (N <= 1);

    printf("\n\nPrime numbers between 1 and %d are : \n", N);

    for (int i = 2; i <= N; i++) 
    {
        int isPrime = 1;

        for (int j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) 
        {
            printf("===> %d\n", i);
        }
    }

    printf("\n");

    return 0;
}
