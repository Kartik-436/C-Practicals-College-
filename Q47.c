#include <stdio.h>
#include <ctype.h>
#include <string.h>

int countVowels(const char *str) 
{
    int count = 0;

    while (*str != '\0') 
    {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        {
            count++;
        }

        str++;
    }
    return count;
}


int main() 
{
    char str[100];

    printf("\nEnter a string => ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    int numVowels = countVowels(str);
    
    printf("\n\nThe number of vowels in the string is => %d\n", numVowels);

    return 0;
}
