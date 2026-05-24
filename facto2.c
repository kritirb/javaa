#include <stdio.h>

int main() {
    int n, i, j;
    unsigned long long factorial;

    // Input: number of values for which factorial is to be calculated
    printf("Enter the number of values: ");
    scanf("%d", &n);

    // Loop to calculate factorial for each number from 1 to n
    for (i = 1; i <= n; i++) {
        factorial = 1;

        // Loop to calculate factorial of i
        for (j = 1; j <= i; j++) {
            factorial *= j;  // Multiply factorial with j for each iteration
        }

        printf("Factorial of %d is %llu\n", i, factorial);
    }

    return 0;
}

