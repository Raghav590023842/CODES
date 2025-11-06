//WAP to apply bitwise or,and, not operators.

#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Enter first Number:");
	scanf("%d",&num1);
	printf("Enter Second Number:");
	scanf("%d",&num2);
	
	printf("\nBitwise AND (Num1 & Num2) = %d", num1 & num2);
    printf("\nBitwise OR  (Num1 | Num2) = %d", num1 | num2);
    printf("\nBitwise NOT (~Num1) = %d", ~num1);
    printf("\nBitwise NOT (~Num2) = %d", ~num2);
    
	return 0;
}
