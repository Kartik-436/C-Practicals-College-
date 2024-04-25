#include<stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
    {
        if (ch >= 'A' && ch <= 'Z') 
        {
            ch = ch + ('a' - 'A');
            printf("\nConverted to lowercase: %c\n", ch);
        } 
        else 
        {
            ch = ch - ('a' - 'A');
            printf("\nConverted to uppercase: %c\n", ch);
        }
    }

    else
    {
        printf("\nEntered character is not an alphabet.\n");
    }
    return 0;
}
