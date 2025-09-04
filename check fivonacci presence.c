//WAP to accept a number from a user and check whether that number is present in the fivonacci series executed for 13 numbers.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter First Number:");
	scanf("%d",&n);
	
	int n1=0,n2=1,n3,i;
	if (n==n1 || n==n2)
	{
		printf("It is Present!");
		
	}
	else{
	
	for(i=2;i<13;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		if (n==n3)
		{
			printf("It is Present!");
		}
		
	}
}
	return 0;
}
