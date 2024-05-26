/*
    This can be done using two Searching algorithms :- 

    1) Binary Search
    2) Linear Search
*/

#include<stdio.h>

int BinarySearch(int *arr, int n, int target)
{
    /*
        First applying sorting alorithm to sort out the array ! ;
    */

    // for (int i = 0; i < n - 1; i++)
    // {
    //     int swapped = 0;

    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //             swapped = 1;
    //         }
    //     }

    //     if (swapped == 0)
    //     {
    //         break;
    //     }
    // }

    int mid, low, high;
    low = 0;
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        
        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        
        else
        {
            high = mid + 1;
        }
    }
    return -1;
}


int LinearSearch(int *arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int size_a, target, result1, result2;
    printf("\nSearching Algorithms -> \n");

    printf("\nEnter the size of the array you want to create to sort : \n-------> ");
    scanf("%d", &size_a);

    int arr[size_a];
    printf("\nEnter the elements of the array ( IN A SORTED FORM ): \n");

    for (int i = 0; i < size_a; i++)
    {
        printf("\nEnter the %d element of the array -> ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n\nEnter the element you want to search in the aaray : ");
    scanf("%d", &target);

    result1 = BinarySearch(arr, size_a, target);
    result2 = LinearSearch(arr, size_a, target);

    printf("\n\nThe element %d is found at %d index of the array i.e %d position!\nUSING BINARY SEARCHING ALGORITHM", target, result1, result1+1);
    printf("\n\nThe element %d is found at %d index of the array i.e %d position!\nUSING LINEAR SEARCHING ALGORITHM", target, result2, result2+1);

    return 0;
}
