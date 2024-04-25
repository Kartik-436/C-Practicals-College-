#include <stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    float C, fh;
    int ch;
    char cont;

    label:

    printf("Do you want to convert temperature? (Y or N) :- ");
    scanf(" %c", &cont);

    while (cont == 'Y' || cont == 'y')
    {

        printf("\n\nConvert the temperature from:\n1) cenitgrade to Fahrenheit\n2) Fahrenheit to centigrade\n\n==> ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter temperature in centigrade :- ");
            scanf("%f", &C);

            fh = (C * 9 / 5) + 32;

            printf("\n\nThe temperature conversion from Celsius to Fahrenheit is\n\n==> %.2f Fahrenheit\n\n", fh);
            break;

        case 2:
            printf("\nEnter temperature in Fahrenheit :- ");
            scanf("%f", &fh);

            C = (fh - 32) * 5 / 9;

            printf("\n\nThe temperature conversion from Fahrenheit to Celsius is\n\n==> %.2f centigrade\n\n", C);
            break;

        default:
            printf("\nWrong input, please choose between 1 & 2\n");
            break;
        }

        printf("\nDo you want to convert temperature again? (Y or N) :- ");
        scanf(" %c", &cont);
    }

    if (cont == 'n' || cont == 'N')
    {
        printf("\nOkay\nClosing the program!\n\n");
    }

    else
    {
        printf("\nWrong input!\n");
        goto label;
    }

    return 0;
}
