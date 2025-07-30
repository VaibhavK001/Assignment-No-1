#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any whitespace

    // Check if the character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Convert uppercase to lowercase for easier checking
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        // Check if the character is a vowel
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}
