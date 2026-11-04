#include <stdio.h>

// Declare structure with typedef for a cleaner nickname[cite: 95]
typedef struct {
    int id;
    char name[30];
    double salary;
} Employee;

int main(void) {
    // Create and initialize an employee structure instance[cite: 94]
    Employee emp1 = {1001, "Maria", 18500.50};

    // Access members using the dot operator[cite: 94, 95]
    printf("--- Employee Record ---\n");
    printf("ID:     %d\n", emp1.id);
    printf("Name:   %s\n", emp1.name);
    printf("Salary: N$%.2f\n", emp1.salary);

    return 0;
}