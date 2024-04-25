// Index starts from 1 in this code...
// Example of fibonacci series is => 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
// =======================> index => 1, 2, 3, 4, 5, 6, 7,  8,  9, 10...

#include <stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    int nth, nterms;
    int n1 = 0;
    int n2 = 1;
    int count = 0;

    do 
    {
        printf("Enter a positive Number for end point (N > 1): ");
        scanf("%d", &nterms);
    } while (nterms <= 1);

    if (nterms == 1)
    {
        printf("\nFibonacci Series upto %d is term :- ", nterms);
        printf("%d", n1);
    }

    else
    {
        printf("\nFibonacci Series upto %d terms is :- \n\n", nterms);

        while (count <= (nterms - 1))
        {
            printf("%d\n", n1);
            nth = (n1 + n2);
            n1 = n2;
            n2 = nth;
            count = count + 1;
        }
    }
    return 0;
}
