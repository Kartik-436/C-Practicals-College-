#include<stdio.h>

int main()
{
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    float base, result = 1.0;
        int power;

        printf("Enter the number you want to know power of : ");
        scanf("%f", &base);

        do {
            printf("\nEnter the Power (a non-negative integer) : ");
            scanf("%d", &power);
        } while (power < 0);

        for (int i = 0; i < power; i++) {
            result *= base;
        }

        printf("\n\n=====>Result: %.2f\n", result);

    return 0;
}
