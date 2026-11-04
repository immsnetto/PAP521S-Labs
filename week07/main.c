#include <stdio.h>
#include <string.h>[cite: 49]

int main(void) {
    char supplierName[100], email[100], phone[30], town[50];[cite: 52]

    printf("Enter supplier name: ");[cite: 52]
    fgets(supplierName, sizeof(supplierName), stdin);[cite: 52]

    printf("Enter email: ");[cite: 52]
    fgets(email, sizeof(email), stdin);[cite: 52]

    printf("Enter phone: ");[cite: 52]
    fgets(phone, sizeof(phone), stdin);[cite: 52]

    printf("Enter town: ");[cite: 52]
    fgets(town, sizeof(town), stdin);[cite: 52]

    printf("\n--- SUPPLIER DETAILS ---\n");[cite: 52]
    printf("Name: %s", supplierName);[cite: 52]
    printf("Email: %s", email);[cite: 52]
    printf("Phone: %s", phone);[cite: 52]
    printf("Town: %s", town);[cite: 52]
    printf("Name Length: %zu\n", strlen(supplierName));[cite: 49]

    return 0;
}