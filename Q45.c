#include <stdio.h>
#include <stdlib.h>

void addMatrices(int *mat1, int *mat2, int *result, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            *(result + i * cols + j) = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
        }
    }
}

int main() 
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int *mat1 = (int *)calloc(rows, cols * sizeof(int));
    int *mat2 = (int *)calloc(rows, cols * sizeof(int));
    int *result = (int *)calloc(rows, cols * sizeof(int));

    printf("\n\nEnter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("\n---> Enter the [%d] [%d] element of the array -> ", i+1, j+1);
            scanf("%d", (mat1 + i * cols + j));
        }
    }

    printf("\n\nEnter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("\n---> Enter the [%d] [%d] element of the array -> ", i+1, j+1);
            scanf("%d", (mat2 + i * cols + j));
        }
    }

    addMatrices(mat1, mat2, result, rows, cols);

    printf("\n\nThe result of adding the two matrices is:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", *(result + i * cols + j));
        }
        printf("\n");
    }

    free(mat1);
    free(mat2);
    free(result);

    return 0;
}
