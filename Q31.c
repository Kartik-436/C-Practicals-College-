/*
    BUBBLE SORT ALGORITHM ->
*/

#include <stdio.h>

void BubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0)
        {
            break;
        }

    }

    printf("\n\nThe array after sorting is ->");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
}


int main()
{
    int size_a;
    printf("\nBubble Sorting Algorithm -> \n");

    printf("\nEnter the size of the array you want to create to sort : \n-------> ");
    scanf("%d", &size_a);

    int arr[size_a];

    for (int i = 0; i < size_a; i++)
    {
        printf("\nEnter the %d element of the array -> ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe array before sorting is ->");
    printf("\n");

    for (int i = 0; i < size_a; i++)
    {
        printf("%d, ", arr[i]);
    }

    BubbleSort(arr, size_a);

    return 0;
}
