#include <stdio.h>

int main() {
    int number, original, reversed = 0;

    // Input a 3-digit number
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    // Check if the number is actually a 3-digit number
    if (number < 100 || number > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 1; // Exit the program
    }

    original = number;

    // Reverse the number
    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    // Check if the original and reversed numbers are the same
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
