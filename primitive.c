#include <stdio.h>

int main() {
    // Declare variables of primitive data types
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;
    long longVar;

    // Display the size of each data type using sizeof operator
    printf("Size of int: %zu bytes\n", sizeof(intVar));
    printf("Size of float: %zu bytes\n", sizeof(floatVar));
    printf("Size of double: %zu bytes\n", sizeof(doubleVar));
    printf("Size of char: %zu byte\n", sizeof(charVar));
    printf("Size of long: %zu bytes\n", sizeof(longVar));

    return 0;
}

