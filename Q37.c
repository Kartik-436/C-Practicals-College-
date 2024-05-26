#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, r;
    printf("Enter the size of the column in the matrix: ");
    scanf("%d", &c);
    
    printf("Enter the size of the row in the matrix: ");
    scanf("%d", &r);

    int arr1[c][r];

    printf("\nEnter the elements of the first Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
        printf("\n---> Enter the [%d] [%d] element of the array -> ", i+1, j+1);
        scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n\nThe matrix obtained is : \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nThe uppar triangular region of the matrix is :\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i <= j)
            {
                printf("%d  ", arr1[i][j]);
            }

            else
            {
                printf("0  ");
            }
        }
        printf("\n");
    }

    return 0;
}
