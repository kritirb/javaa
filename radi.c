#include <stdio.h>

// Step 1: Define Pi as a constant
#define PI 3.14159

int main() {
    // Step 2: Declare a variable to store the radius
    float radius, area;

    // Step 3: Prompt user to enter the radius
    printf("Enter the radius of the circle: ");
    
    // Step 4: Read the radius from user input
    scanf("%f", &radius);

    // Step 5: Calculate the area of the circle
    area = PI * radius * radius;

    // Step 6: Display the calculated area
    printf("The area of the circle  is: %.2f\n", radius, area);

    // Step 7: End the program
    return 0;
}

