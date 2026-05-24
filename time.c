#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input the total number of seconds
    printf("Enter the total number of seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes, and seconds
    hours = totalSeconds / 3600;            // 1 hour = 3600 seconds
    totalSeconds = totalSeconds % 3600;     // Get remaining seconds after extracting hours
    minutes = totalSeconds / 60;            // 1 minute = 60 seconds
    seconds = totalSeconds % 60;            // Remaining seconds after extracting minutes

    // Display the result
    printf("%d seconds is equal to %d hours, %d minutes and %d seconds.\n", totalSeconds, hours, minutes, seconds);

    return 0;
}

