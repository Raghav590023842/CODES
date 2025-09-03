//WAP to accept a number from a user and display the product of digits.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter a Number %d",num);
	scanf("%d",&num);
	
	int product=1,n;
	while(num>0)
	{
		n=num%10;
		product=product*n;
		num=num/10;
	}
	printf("Product of Digits= %d\n",product);
	return 0;	
}

