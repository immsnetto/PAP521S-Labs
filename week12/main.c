#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    double salary;
} Employee;

// Function using pointers (pass-by-address) and the arrow operator (->) to modify the original record
void updateSalary(Employee *e, double newSalary) {
    if (e != NULL) {
        e->salary = newSalary;[cite: 110]
    }
}

int main(void) {
    Employee maria = {1001, "Maria", 18500.50};[cite: 111]

    printf("Before Update: Maria earns N$%.2f\n", maria.salary);[cite: 111]
    
    // Pass the address of the structure using &
    updateSalary(&maria, 20350.55);[cite: 111]

    printf("After Update:  Maria earns N$%.2f\n", maria.salary);[cite: 111]

    return 0;
}