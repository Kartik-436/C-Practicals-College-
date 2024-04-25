#include <stdio.h>

int main() 
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int count = 0;
    int sum = 0;
    float average;

    printf("Enter 10 different numbers:\n");

    while (count < 10) 
    {
        int num;
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);
        
        sum += num;
        count++;
    }

    average = (float)sum / 10;

    printf("\nSum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);

    return 0;
}
