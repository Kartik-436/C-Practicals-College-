#include <stdio.h>
#include <string.h>

int GTBIT_Strlen(const char *str) 
{
    int length = 0;

    while (*str != '\0') 
    {
        length++;
        str++;
    }

    return length;
}


void GTBIT_Strcpy(char *dest, const char *src) 
{
    while (*src != '\0') 
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}


void GTBIT_Strcat(char *dest, const char *src) 
{
    while (*dest != '\0') 
    {
        dest++;
    }

    while (*src != '\0') 
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}


int main() 
{
    char str1[100], str2[100], str3[200];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("\nEnter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int length = GTBIT_Strlen(str1);
    printf("\nThe length of the first string is: %d\n", length);

    GTBIT_Strcpy(str3, str1);
    printf("\nThe copy of the first string is: %s\n", str3);

    GTBIT_Strcat(str3, str2);
    printf("\nThe concatenation of the two strings is: %s\n", str3);

    return 0;
}
