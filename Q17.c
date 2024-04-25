// #include <stdio.h>

// // Function to convert decimal to binary
// void decimalToBinary(unsigned int n) {
//     int binary[32];
//     int i = 0;
    
//     // Convert decimal to binary
//     while (n > 0) {
//         binary[i] = n % 2;
//         n = n / 2;
//         i++;
//     }

//     // Display binary number in reverse order
//     printf("Binary number: ");
//     for (int j = i - 1; j >= 0; j--) {
//         printf("%d", binary[j]);
//     }
//     printf("\n");
// }

// // Function to convert binary to octal
// void binaryToOctal(int binary[], int length) {
//     int octal[32];
//     int i, j;
//     int rem, sum;

//     // Padding binary number to make its length multiple of 3
//     int padding = (3 - length % 3) % 3;
//     for (i = 0; i < padding; i++) {
//         binary[length + i] = 0;
//     }

//     // Convert binary to octal
//     for (i = 0, j = 0; i < length; i += 3, j++) {
//         sum = binary[i] * 4 + binary[i + 1] * 2 + binary[i + 2];
//         octal[j] = sum;
//     }

//     // Display octal number
//     printf("Octal number: ");
//     for (i = j - 1; i >= 0; i--) {
//         printf("%d", octal[i]);
//     }
//     printf("\n");
// }

// int main() {

//     printf("\nName => Kartik Garg\n");
//     printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

//     unsigned int decimal;
    
//     // Prompt user to enter a decimal number
//     printf("Enter a decimal number: ");
//     scanf("%u", &decimal);
    
//     // Convert decimal to binary
//     printf("Decimal number: %u\n", decimal);
//     decimalToBinary(decimal);
    
//     // Convert binary to octal
//     int binary[32];
//     int i = 0;
//     while (decimal > 0) {
//         binary[i] = decimal % 2;
//         decimal = decimal / 2;
//         i++;
//     }
//     int length = i;
//     binaryToOctal(binary, length);
    
//     return 0;
// }

#include <stdio.h>

int main() {

    printf("\nName => Kartik Garg\n");
    printf("Class & Enrollment No => IT-1, Second Sem, 01813203123\n\n");

    unsigned int decimal;
    
    // Prompt user to enter a decimal number
    printf("Enter a decimal number: ");
    scanf("%u", &decimal);
    
    // Convert decimal to octal
    printf("Octal number: %o\n", decimal);

    // Convert decimal to binary
    printf("Binary number: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (decimal >> i) & 1);
    }
    printf("\n");
    
    return 0;
}
