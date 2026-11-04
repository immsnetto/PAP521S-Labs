#include <stdio.h>

int main(void) {
    float salary, total = 0.0, highest = 0.0, lowest = 0.0, average;

    for (int i = 1; i <= 5; i++) {
        printf("Enter salary for employee %d: ", i);
        scanf("%f", &salary);
        total += salary;

        if (i == 1) {
            highest = salary;
            lowest = salary;
        } else {
            if (salary > highest) highest = salary;
            if (salary < lowest) lowest = salary;
        }
    }

    average = total / 5;
    printf("\nAverage salary: %.2f\n", average);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary: %.2f\n", lowest);

    return 0;
}