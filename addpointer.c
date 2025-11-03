//WAP to add two numbers using pointers.

#include <stdio.h>

int main() {
    int num1, num2, sum,*ptr1, *ptr2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    printf("Sum = %d\n", sum);

    return 0;
}

