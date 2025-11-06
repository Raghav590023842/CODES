//WAP to apply left shift and right shift operator.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	printf("\nLeft Shift (num << 1)  = %d", num << 1);
    printf("\n\nRight Shift (num >> 1) = %d", num >> 1);
    
	return 0;
}
