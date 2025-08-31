//WAP to find factorial of a number

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number %d",n);
	scanf("%d",&n);
	int fact=1,i=1;
	while(i<=n)
	{
		fact = fact*i;
		i++;
	}
	
	printf("Factorial of %d is: %d", n,fact);
	return 0;
}
