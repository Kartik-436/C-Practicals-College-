#include<stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) 
    {
        printf("ASCII value of %c is %d\n", ch, ch);
    } 

    else 
    {
        printf("Entered character is neither an alphabet nor a digit.\n");
    }
    return 0;
}
