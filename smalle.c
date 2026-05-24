#include <stdio.h>

int main() {
    int a, b, smallest;

    // Input two integers from the user
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Using conditional operator to find the smallest number
    smallest = (a < b) ? a : b;

    // Output the smallest number
    printf("The smallest number is: %d\n", smallest);

    return 0;
}

