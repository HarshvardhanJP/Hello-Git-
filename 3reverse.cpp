#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    // Prompt the user to enter a 3-digit number
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    // Check if the input is a 3-digit number
    if (number < 100 || number > 999) {
        printf("Error: Please enter a valid 3-digit number.\n");
        return 1;
    }

    // Reverse the digits
    while (number != 0) {
        int digit = number % 10; // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit; // Build the reversed number
        number /= 10; // Remove the last digit
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}