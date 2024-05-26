#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of the Matrix you want to create : ");
    scanf("%d", &size);

    int arr1[size][size], arr2[size][size], arr3[size][size];

    printf("\nEnter the elements of the first Matrix : \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
        printf("\n---> Enter the [%d] [%d] element of the array -> ", i+1, j+1);
        scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n\nEnter the elements of the Second Matrix : \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
        printf("\n---> Enter the [%d] [%d] element of the array -> ", i+1, j+1);
        scanf("%d", &arr2[i][j]);
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr3[i][j] = ( arr1[i][j] + arr2[i][j] );
        }
    }

    printf("\n\nThe matrix after addition is : \n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d  ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
