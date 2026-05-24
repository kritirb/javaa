#include <stdio.h>

int main() {
    char choice;
    float num1, num2, result;

    do {
        // Display the menu
        printf("\nMenu:\n");
        printf("a. Addition\n");
        printf("b. Subtraction\n");
        printf("c. Multiplication\n");
        printf("d. Division\n");
        printf("e. Exit\n");
        printf("Enter your choice (a-e): ");
        scanf("%s", &choice);

        switch (choice) {
            case 1:
                // Addition: num1 + num2
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("The result of %.2f + %.2f is: %.2f\n", num1, num2, result);
                break;

            case 2:
                // Subtraction: num1 - num2
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 - num2;
                printf("The result of %.2f - %.2f is: %.2f\n", num1, num2, result);
                break;

            case 3:
                // Multiplication: num1 * num2
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("The result of %.2f * %.2f is: %.2f\n", num1, num2, result);
                break;

            case 4:
                // Division: num1 / num2
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                // Check for division by zero
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("The result of %.2f / %.2f is: %.2f\n", num1, num2, result);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;

            case 5:
                // Exit the program
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please enter a valid option (1-5).\n");
        }
    } while (choice != 5);  // Continue until the user chooses to exit

    return 0;
}

