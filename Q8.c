#include<stdio.h>

int main()
{

    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("\n\nThe number entered should not be 0 or negative");
    }
    
    else
    {
        if (num % 2 == 0)
        {
            printf("\n\nNumber entered is Even\n");
        }
        else
        {
            printf("\n\nNumber entered is Odd\n");
        }
    }
    return 0;
}
