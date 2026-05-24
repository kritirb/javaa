#include <stdio.h>

int main() {
    int num, count = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handling negative numbers by taking the absolute value


    // Counting the digits using a loop
    if (num == 0) {
        count = 1;  // Special case for 0
    } else {
        while (num > 0) {
            num = num / 10;  // Remove the last digit
            count++;          // Increment the digit count
        }
    }

    // Output the result
    printf("The number of digits is: %d\n", count);

    return 0;
}

