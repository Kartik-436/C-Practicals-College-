#include <stdio.h>

int main() {
    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    float num1, num2, result;
    char operation;
    int validChoice = 0;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("\nEnter second number: ");
    scanf("%f", &num2);

    do 
    {
        printf("\nEnter operation (+, -, *, /, %%): ");
        scanf(" %c", &operation);

        switch (operation) 
        {
            case '+':
                result = num1 + num2;
                validChoice = 1;

                break;

            case '-':
                result = num1 - num2;
                validChoice = 1;

                break;

            case '*':
                result = num1 * num2;
                validChoice = 1;

                break;

            case '/':
                if (num2 != 0) 
                {
                    result = num1 / num2;
                    validChoice = 1;
                } 
                
                else 
                {
                    printf("Division by zero is not allowed.\n");
                }

                break;

            case '%':
                if (num2 != 0) 
                {
                    result = (int)num1 % (int)num2;
                    validChoice = 1;
                } 
                else 
                {
                    printf("Division by zero is not allowed.\n");
                }

                break;

            default:
                printf("Invalid choice! Please enter a valid operation.\n");
                break;
        }
    } while (!validChoice);

    printf("\n\nResult :\n======> %.2f  %c  %.2f  =>  %.2f\n",num1, operation, num2, result);

    return 0;
}
