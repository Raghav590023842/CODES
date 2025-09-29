//WAP to accept the details of employee 
//and display them using structure.
//Details consist of Employee ID,Name,Designation,Department,Salary.

#include <stdio.h>
struct employee
{
    int id;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};
int main()
{
    struct employee emp;
    
    printf("Enter employee id: ");
    scanf("%d", &emp.id);
    
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    
    printf("Enter designation: ");
    scanf("%s", emp.designation);
    
    printf("Enter department: ");
    scanf("%s", emp.department);
    
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    
   	printf("\n--- Employee Details ---\n");
    printf("Employee ID   : %d\n", emp.id);
    printf("Name          : %s\n", emp.name);
    printf("Designation   : %s\n", emp.designation);
    printf("Department    : %s\n", emp.department);
    printf("Salary        : %f\n", emp.salary);
    return 0;
}

