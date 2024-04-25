#include<stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    float marks[5], percentage, total = 0;
    printf("Enter the marks for the subjects : ");

    for (int i = 0; i < 5; i++)
    {
        printf("\nSubject %d : ", i+1);
        scanf("%f", &marks[i]);
        if (marks[i] > 100 || marks[i] < 0)
        {
            printf("\nMarks Can not be smaller than 0 OR greater than 100 !\nInvalid Marks!\n\n");
            return -1;
        }

        else
        {
        total += marks[i];
        }
    }

    percentage = (total / 500) * 100;
    printf("\nTotal marks => %.2f ", total);
    printf("\nPercentage => %.2f ", percentage);
    
    return 0;
}
