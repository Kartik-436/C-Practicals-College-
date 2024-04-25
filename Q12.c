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

    if (percentage >= 90.00)
    {
        printf("\nYou have scored  a Grade A\n");
    }

    else if (percentage < 90.00 && percentage >=80.00)
    {
        printf("\nYou have scored a grade B\n");
    }

    else if (percentage  < 80.00 && percentage >=70.00)
    {
        printf("\nYou have scored a grade C\n");
    }

    else if (percentage < 70.00 && percentage >= 60.00)
    {
        printf("\nYou have scored grade D\n");
    }

    else if (percentage < 60.00 && percentage >= 50.00)
    {
        printf("\nYou have scored grade E\n");
    }

    else if (percentage < 50.00)
    {
        printf("\nYou have FAILED, awarded F grade\n");
    }

    else
    {
        printf("\nInvalid percentage\n");
    }

    return 0;
}
