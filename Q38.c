#include <stdio.h>

int cube(int num) 
{
    return num * num * num;
}

int main() 
{
    for (int i = 1; i <= 10; i++) 
    {
        int result = cube(i);
        printf("The cube of %d is %d\n", i, result);
    }
    
    return 0;
}
