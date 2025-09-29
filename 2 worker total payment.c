//Write a C program to read the details of two workers and calculate total payment of workers using structure.

#include <stdio.h>

struct Worker {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Worker w1, w2;
    float totalPayment;

    printf("Enter Worker 1 ID: ");
    scanf("%d", &w1.id);

    printf("Enter Worker 1 Name: ");
    scanf("%s", w1.name);

    printf("Enter Worker 1 Salary: ");
    scanf("%f", &w1.salary);

    
    printf("\nEnter Worker 2 ID: ");
    scanf("%d", &w2.id);

    printf("Enter Worker 2 Name: ");
    scanf("%s", w2.name);

    printf("Enter Worker 2 Salary: ");
    scanf("%f", &w2.salary);

    
    totalPayment = w1.salary + w2.salary;

    
    printf("\n--- Worker Details ---\n");
    printf("Worker 1: ID=%d, Name=%s, Salary=%.2f\n", w1.id, w1.name, w1.salary);
    printf("Worker 2: ID=%d, Name=%s, Salary=%.2f\n", w2.id, w2.name, w2.salary);

    printf("\nTotal Payment of both workers: %.2f\n", totalPayment);

    return 0;
}


