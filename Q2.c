#include<stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    float pr, roi, t, SI;

    printf("Enter the principle amount : ");
    scanf("%f", &pr);

    printf("Enter the rate of interest : ");
    scanf("%f", &roi);

    printf("Enter the time period : ");
    scanf("%f", &t);

    if (pr < 0 || roi < 0 || t < 0)
    {
        printf("Values cannot be less than 0");
    }

    else
    {
        SI = ((pr * roi * t)/100);
        printf("\n\nThe simple interest with %.2f principal amount, %.2f Rate of interest, %.2f Time period is => %.2f", pr, roi, t, SI);        
    }

    return 0;
}
