//WAP to accept 2 numbers from a user and display the squares of even numbers and cubes of odd numbers in that range.

#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter First Number:");
	scanf("%d",&num1);
	printf("Enter Second Number:");
	scanf("%d",&num2);
	
	int odd,even,i,sq,cu;
	for (i=num1;i<=num2;i++)
	{
		if (i%2==0)
		{
			even=i;
			sq=(even*even);
			printf("%d,",sq);
		}
		else 
		{
			odd=i;
			cu=(odd*odd*odd);
			printf("%d,",cu);
		}
		
		
	}
	
	
	return 0;
}
