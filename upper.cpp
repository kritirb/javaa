#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Using switch-case to find the maximum number
    switch (num1 > num2) {
        case 1:  // num1 is greater than num2
            printf("The maximum number is: %d\n", num1);
            break;
         // num1 is less than or equal to num2
            switch (num1 == num2) {
                case 1: // num1 is equal to num2
                    printf("Both numbers are equal.\n");
                    break;
                 // num2 is greater than num1
                    printf("The maximum number is: %d\n", num2);
                    break;
            }
            break;
        default:
            printf("Invalid input.\n");
            break;
    }

    return 0;
}

