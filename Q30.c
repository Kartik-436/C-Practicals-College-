#include <stdio.h>

int main() 
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int numbers[10];
    int i, largest, smallest;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    largest = smallest = numbers[0];

    for (i = 1; i < 10; i++) 
    {
        if (numbers[i] > largest) 
        {
            largest = numbers[i];
        }

        if (numbers[i] < smallest) 
        {
            smallest = numbers[i];
        }
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
