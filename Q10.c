#include<stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int num;
    printf( "Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("\nNumber is 0");
    }
    
    else if (num < 0)
    {
        printf("\nNumber is negative");
    }

    else
    {
        printf("\nNumber is positive");
    }

    return 0;
}
