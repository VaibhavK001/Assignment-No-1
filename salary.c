#include <stdio.h>

int main() {
    float basic, da, ta, hra, total;

    // Input the basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    // Calculate DA, TA, HRA based on basic salary
    if (basic <= 5000) {
        da = basic * 0.10;   // 10%
        ta = basic * 0.20;   // 20%
        hra = basic * 0.25;  // 25%
    } else {
        da = basic * 0.15;   // 15%
        ta = basic * 0.25;   // 25%
        hra = basic * 0.30;  // 30%
    }

    // Calculate total salary
    total = basic + da + ta + hra;

    // Display results
    printf("\nBasic Salary: %.2f", basic);
    printf("\nDA: %.2f", da);
    printf("\nTA: %.2f", ta);
    printf("\nHRA: %.2f", hra);
    printf("\nTotal Salary: %.2f\n", total);

    return 0;
}
