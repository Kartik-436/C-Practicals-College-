#include <stdio.h>

int main() 
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int rows;
    char ch = 'A';
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%c ", ch++);
        }

        printf("\n");
    }
    
    return 0;
}
