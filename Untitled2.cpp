#include <stdio.h>

int main() {
    int num, reversed = 0, original, digit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store the original number

    // Reverse the number
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Check if the number is a palindrome
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}

