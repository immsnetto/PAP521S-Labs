#include <stdio.h>

int main(void) {
    // Open a text file for writing (creates/truncates file)[cite: 84, 85]
    FILE *fp = fopen("employees.txt", "w");[cite: 84, 85]
    if (fp == NULL) {
        perror("employees.txt");[cite: 84, 85]
        return 1;[cite: 84, 85]
    }

    // Write structured records using fprintf[cite: 84, 85]
    fprintf(fp, "%d %s %.2f\n", 1001, "Maria", 18500.50);[cite: 85]
    fprintf(fp, "%d %s %.2f\n", 1002, "Simon", 17200.00);[cite: 85]
    
    // Close the file stream[cite: 84, 85]
    fclose(fp);[cite: 84, 85]

    printf("Data written successfully to employees.txt\n");
    return 0;
}