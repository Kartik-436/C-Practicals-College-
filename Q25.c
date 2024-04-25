#include <stdio.h>

int main() 
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int rows;

    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) 
    {
        for (int j = i; j >= 1; j--) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
