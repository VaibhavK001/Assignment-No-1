#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Space before %c handles any leftover newline

    // Check if the character is uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    } else {
        printf("%c is not an alphabetic character.\n", ch);
    }

    return 0;
}
