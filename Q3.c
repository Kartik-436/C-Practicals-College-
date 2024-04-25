#include<stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");
    float l, b, area, pm;

    printf("Enter length of the rectangle : ");
    scanf("%f", &l);

    printf("Enter the breadth of the rectangle : ");
    scanf("%f", &b);

    if (l <= 0 || b <= 0)
    {
        printf("Values cannot be less than or equal to 0");
        return 0;
    }

    else
    {
        area = l * b;
        pm = (l+b)*2;

        printf("\n\nRectangle of length %.2f and breadth %.2f has an Area of %.2f and Perimeter of %.2f",l, b, area, pm);
    }
    
    return 0;
}
