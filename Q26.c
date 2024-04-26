#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int lastOddValue = 0;

    for (int i = rows; i >= 1; i--) 
    {
        if (i % 2 != 0) 
        {
            for (int j = rows; j >= ((rows + 1) - i); j--) 
            {
                printf("%d", j);
            }
            lastOddValue = ((rows + 1) - i);
        }

        else 
        {

            for (int j = 1; j <= i; j++) 
            {
                printf("%d", lastOddValue);
            }
        }
        printf("\n");
    }

    return 0;
}
