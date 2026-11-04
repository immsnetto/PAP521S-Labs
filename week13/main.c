#include <stdio.h>
#include <stdlib.h> // Required for malloc, realloc, free[cite: 117]

typedef struct {
    int id;
    double salary;
} Employee;

int main(void) {
    int capacity = 2; // Initial capacity[cite: 121]
    int count = 0;    // Current items stored[cite: 121]

    // Allocate initial memory on the heap[cite: 117, 121]
    Employee *staff = malloc(capacity * sizeof(Employee));
    if (staff == NULL) {
        printf("Out of memory!\n");
        return 1;
    }

    // Simulating dynamic additions (growing array with realloc)[cite: 120, 121]
    for (int i = 0; i < 4; i++) {
        if (count == capacity) {
            capacity *= 2; // Double capacity[cite: 121]
            Employee *temp = realloc(staff, capacity * sizeof(Employee));[cite: 120, 121]
            if (temp == NULL) {
                free(staff);
                return 1;
            }
            staff = temp;
            printf("(Array resized to %d slots)\n", capacity);[cite: 121]
        }
        staff[count].id = 1001 + i;
        staff[count].salary = 15000.0 + (i * 1000);
        count++;
    }

    printf("\n--- Dynamically Stored Staff ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Salary: N$%.2f\n", staff[i].id, staff[i].salary);[cite: 121]
    }

    // Always free heap memory[cite: 118, 121]
    free(staff);
    staff = NULL;

    return 0;
}