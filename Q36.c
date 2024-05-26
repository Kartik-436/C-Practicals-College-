#include<stdio.h>

int IsUppar(int a, int b)
{
    if(a > b)
    {
        return b;
    }

    else
    {
        return a;
    }
}


int main()
{
    int c, r, x;
    printf("Enter the size of the column in the matrix: ");
    scanf("%d", &c);
    
    printf("Enter the size of the row in the matrix: ");
    scanf("%d", &r);

    int arr1[c][r], sum = 0;

    printf("\nEnter the elements of the first Matrix : \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
        printf("\n---> Enter the [%d] [%d] element of the array -> ", i+1, j+1);
        scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n\nThe matrix obtained is : \n");

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }
    
    x = IsUppar(r, c);

    printf("\n\nThe Diagonal of the matrix obtained is : \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == j || (i+j) == (x-1))
            {
                printf("%d  ", arr1[i][j]);
                sum += arr1[i][j]; 
            }

            else
            {
                printf("0  ");
            }
        }
        printf("\n");
    }

    printf("\n\nThe SUM of all the diagonal elements in the matrix is => %d\n\n", sum);
    return 0;
}
