#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // For malloc(), free()

// Task 2. Define the Employee structure
struct Employee {
    char Name[100];
    char Position[100];
    int Salary;
};

// Task 3. Define an alias for struct Employee
typedef struct Employee Employee;

// Task 4. Define a function for setting the value of the member variables of an Employee object
void setEmployee(char n[], char p[], int sal, Employee *e) {
    // Copy the value in char array n into the Name of the Employee object e
    strcpy(e->Name, n);
    // Copy the value in char array p into the Position of the Employee object e
    strcpy(e->Position, p);
    // Assign the value of sal to the Salary of the Employee object e
    e->Salary = sal;
}

// Task 5. Define a function printing the information of an Employee object
void showInfo(Employee e) {
    // Print the Name of the Employee e
    printf("Name: %s\n", e.Name);
    // Print the Position of the Employee e
    printf("Position: %s\n", e.Position);
    // Print the Salary of the Employee e
    printf("Salary: %d\n", e.Salary);
}

int main() {
    int numOfEmployee;

    // Task 6. Read in user input for the number of employees
    scanf("%d", &numOfEmployee);

    // Task 7. Create an array of Employee with numOfEmployee number of slots
    Employee *e = (Employee *)malloc(numOfEmployee * sizeof(Employee));

    if (e == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit if memory allocation fails
    }

    // Task 8. Use a for loop to read in all Employee information from user input
    for (int i = 0; i < numOfEmployee; i++) {
        char n[100], p[100];
        int sal;

        // Read name, position, and salary
        scanf("%s %s %d", n, p, &sal);  // No extra prompts, direct reading from input

        // Set the Employee information
        setEmployee(n, p, sal, &e[i]);  // Pass address of e[i] to setEmployee
    }

    // Task 9. Use a for loop to print the information of each Employee
    for (int i = 0; i < numOfEmployee; i++) {
        showInfo(e[i]);  // Pass e[i] by value to showInfo
    }

    // Task 10. Free the dynamically allocated memory
    free(e);

    return 0;
}
