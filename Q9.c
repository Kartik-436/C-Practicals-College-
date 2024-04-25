#include<stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int year;

    printf("Enter a Year to check if  it is Leap or not: ");
    scanf("%d",&year);

    if (year <= 0)
    {
        printf("\n\nYear can not be 0 or negative");
    }
    
    else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("\n%d Year is a leap year\n", year);
    }
    
    else
    {
        printf("\n%d Year is not a leap year\n", year);
    }

    return 0;
}
