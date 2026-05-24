#include <stdio.h>

int main() {
    // Declare two float variables to store decimal numbers
    float num1, num2, sum;

    // Prompt the user to enter the first decimal number
    printf("Enter the first decimal number: ");
    scanf("%f", &num1);

    // Prompt the user to enter the second decimal number
    printf("Enter the second decimal number: ");
    scanf("%f", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("The sum of %.2f and %.2f is %.2f\n", num1,num2, sum);

    return 0;
}

