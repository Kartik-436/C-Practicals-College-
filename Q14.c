#include<stdio.h>
#include<ctype.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    char ch;
    
    printf("Enter a single character : ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("\n\n%c is an Uppercase letter.\n", ch);
    }

    else if (islower(ch)) {
        printf("\n\n%c is a Lowercase letter.\n", ch);
    }

    else if (isdigit(ch)) {
        printf("\n\n%c is a Digit.\n", ch);
    }

    else {
        printf("\n\n%c is a Special symbol.\n", ch);
    }

    return 0;
}
