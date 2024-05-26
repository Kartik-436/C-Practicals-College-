#include <stdio.h>
#define PI 3.14159

double calculateArea(double radius) 
{
    return PI * radius * radius;
}

int main() 
{
    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    double area = calculateArea(radius);
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);

    return 0;
}
