#include <stdio.h>

float calculateVAT(float amount) {
    return amount * 0.15f;[cite: 61, 62]
}

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;[cite: 62]
}

void displayMenu(void) {
    printf("\n=== MUNICIPAL FINANCIAL MANAGEMENT ===\n");[cite: 63, 67]
    printf("1. Calculate VAT\n");[cite: 68]
    printf("2. Calculate Salary\n");[cite: 68]
    printf("3. Exit\n");[cite: 68]
    printf("Enter choice: ");[cite: 68]
}

int main(void) {
    int choice;
    do {
        displayMenu();[cite: 69]
        scanf("%d", &choice);[cite: 69]

        if (choice == 1) {
            float amt;
            printf("Enter amount: ");
            scanf("%f", &amt);
            printf("VAT: %.2f\n", calculateVAT(amt));
        } else if (choice == 2) {
            float b, h, t;
            printf("Enter Basic, Housing, Transport: ");
            scanf("%f %f %f", &b, &h, &t);
            printf("Gross: %.2f\n", calculateSalary(b, h, t));[cite: 62]
        }
    } while (choice != 3);[cite: 69]

    return 0;
}