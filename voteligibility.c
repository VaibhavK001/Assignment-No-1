#include <stdio.h>

int main() {
    int age;

    // Input age from the user
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
